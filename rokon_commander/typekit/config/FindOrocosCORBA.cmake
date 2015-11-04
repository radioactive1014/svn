IF (NOT OrocosRTT_FOUND)
    FIND_PACKAGE(OrocosRTT REQUIRED)
ENDIF(NOT OrocosRTT_FOUND)

orogen_pkg_check_modules(OrocosCORBA "orocos-rtt-corba-${OROCOS_TARGET}>=2.1.0")
IF(NOT OrocosCORBA_FOUND)
    IF (OrocosCORBA_FIND_REQUIRED)
	MESSAGE(FATAL_ERROR "RTT has not been built with CORBA support")
    ELSEIF(NOT OrocosCORBA_FIND_QUIETLY)
	MESSAGE(STATUS "RTT has not been built with CORBA support")
    ENDIF (OrocosCORBA_FIND_REQUIRED)

ELSE(NOT OrocosCORBA_FOUND)
    LIST(APPEND OROCOS_COMPONENT_INCLUDE ${OrocosCORBA_INCLUDE_DIRS})

    # First, find the actual implementation of the used ORB (TAO or OMNIORB)
    FIND_FILE( OrocosCORBA_config rtt/transports/corba/rtt-corba-config.h ${OrocosRTT_INCLUDE_DIRS})
    FILE(STRINGS ${OrocosCORBA_config} CORBA_IMPLEMENTATION
        REGEX "define RTT_CORBA_IMPLEMENTATION ")
    STRING(STRIP ${CORBA_IMPLEMENTATION} CORBA_IMPLEMENTATION)
    STRING(REGEX MATCH "[^ ]+$" CORBA_IMPLEMENTATION ${CORBA_IMPLEMENTATION})

    # In the case of the TAO ORB, we add TAO_Strategies to be able to use
    # multiple communication methods
    IF (CORBA_IMPLEMENTATION STREQUAL "TAO")
        LIST(APPEND OrocosCORBA_LIBRARIES TAO_Strategies TAO_AnyTypeCode)
    ENDIF (CORBA_IMPLEMENTATION STREQUAL "TAO")
    IF (CORBA_IMPLEMENTATION STREQUAL "OMNIORB")
        LIST(APPEND OrocosCORBA_LIBRARIES omniDynamic4)
    ENDIF (CORBA_IMPLEMENTATION STREQUAL "OMNIORB")


    # ORB-specific configuration steps if the TYPEKIT component
    # is required
    STRING(REGEX MATCH "Typekit" _orocos_corba_typekit "${OrocosCORBA_FIND_COMPONENTS}")
    IF (_orocos_corba_typekit)
        IF (CORBA_IMPLEMENTATION STREQUAL "TAO")
	    MESSAGE(STATUS "Orocos reports in ${OrocosCORBA_config} to use the TAO ORB")

            FIND_PROGRAM(OrocosCORBA_IDL_EXECUTABLE tao_idl)
            IF (OrocosCORBA_IDL_EXECUTABLE )
                SET(OrocosCORBA_Typekit_FOUND TRUE)
                ADD_DEFINITIONS(-D_REENTRANT)
                # The ${OrocosRTT_INCLUDE_DIRS}/rtt part is a workaround for RTT's
                # includes brokenness
                SET(OrocosCORBA_Typekit_INCLUDE_DIR "${OrocosCORBA_INCLUDE_DIRS}")
                SET(OrocosCORBA_IDL ${OrocosCORBA_IDL_EXECUTABLE})
            ELSE(OrocosCORBA_IDL_EXECUTABLE )
                IF(NOT OrocosCORBA_FIND_QUIETLY)
                    MESSAGE(STATUS "cannot find tao_idl or associated development files")
                ENDIF(NOT OrocosCORBA_FIND_QUIETLY)
            ENDIF (OrocosCORBA_IDL_EXECUTABLE)

        ELSEIF (CORBA_IMPLEMENTATION STREQUAL "OMNIORB")
	    MESSAGE(STATUS "Orocos reports in ${OrocosCORBA_config} to use the OMNIORB")

            FIND_PROGRAM(OrocosCORBA_IDL_EXECUTABLE omniidl)
            IF (OrocosCORBA_IDL_EXECUTABLE)
                SET(OrocosCORBA_Typekit_FOUND TRUE)
                # The ${OrocosRTT_INCLUDE_DIRS}/rtt part is a workaround for RTT's
                # includes brokenness
                SET(OrocosCORBA_Typekit_INCLUDE_DIR "${OROCOS_RTT_INCLUDE_DIRS}/rtt;${OROCOS_RTT_INCLUDE_DIRS}/rtt/corba")
                SET(OrocosCORBA_IDL ${OrocosCORBA_IDL_EXECUTABLE} -bcxx -Wba -Wbh=C.h -Wbs=C.cpp -Wbd=DynSK.cpp)
            ELSE(OrocosCORBA_IDL_EXECUTABLE)
                IF(NOT OrocosCORBA_FIND_QUIETLY)
                    MESSAGE(STATUS "cannot find omniidl or associated development files")
                ENDIF(NOT OrocosCORBA_FIND_QUIETLY)
            ENDIF (OrocosCORBA_IDL_EXECUTABLE)
        ELSE (CORBA_IMPLEMENTATION STREQUAL "TAO")
            MESSAGE(FATAL_ERROR "unknown Corba implementation ${CORBA_IMPLEMENTATION}")
        ENDIF (CORBA_IMPLEMENTATION STREQUAL "TAO")
    ENDIF (_orocos_corba_typekit)
ENDIF(NOT OrocosCORBA_FOUND)

