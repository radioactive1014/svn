/* Generated from orogen/lib/orogen/templates/typekit/corba/Type.cpp */

#include "Types.hpp"
#include "transports/corba/Registration.hpp"
#include "transports/corba/Convertions.hpp"
#include <rtt/transports/corba/CorbaTemplateProtocol.hpp>

namespace RTT
{
    namespace corba
    {
        template<>
        struct AnyConversion< ::std::vector< double > >
        {
            typedef orogen::Corba::vector__double_ CorbaType;
            typedef ::std::vector< double >   BaseType;

            static bool update(const CORBA::Any& any, BaseType& tp)
            {
                
                CorbaType*  corba;
                if (!(any >>= corba))
                    return false;
                bool ret = orogen_typekits::fromCORBA(tp, *corba);
                return ret;
                
            }

            static CORBA::Any_ptr createAny( BaseType const& tp )
            {
                std::auto_ptr< CORBA::Any > ret( new CORBA::Any() );
                if (!updateAny(tp, *ret))
                    return 0;
                return ret.release();
            }

            static bool updateAny( BaseType const& value, CORBA::Any& any )
            {
                
                std::auto_ptr<CorbaType> corba( new CorbaType );
                if (!orogen_typekits::toCORBA(*corba, value))
                    return false;
                any <<= corba.release();
                
                return true;
            }
        };
    }
}

namespace orogen_typekits {
    RTT::corba::CorbaTypeTransporter*  std_vector__double__CorbaTransport()
    {
        return new RTT::corba::CorbaTemplateProtocol< ::std::vector< double > >();
    }
}

