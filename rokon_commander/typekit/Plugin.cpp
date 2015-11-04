/* Generated from orogen/lib/orogen/templates/typekit/Plugin.cpp */

// First load all RTT interfaces so that we get all "extern template"
// declarations in the TypekitImpl files
#include "Plugin.hpp"

#include <iostream>
#include <boost/cstdint.hpp>
#include <boost/lexical_cast.hpp>

#include <rtt/types/TypeInfoRepository.hpp>
#include "type_info/Registration.hpp"

using namespace RTT;

orogen_typekits::KUKACommanderTypekitPlugin::KUKACommanderTypekitPlugin()
{}

orogen_typekits::KUKACommanderTypekitPlugin::~KUKACommanderTypekitPlugin()
{}


#define TYPEKIT_PACKAGE_NAME_aux0(target) #target
#define TYPEKIT_PACKAGE_NAME_aux(target) "KUKACommander-typekit-" TYPEKIT_PACKAGE_NAME_aux0(target)
#define TYPEKIT_PACKAGE_NAME TYPEKIT_PACKAGE_NAME_aux(OROCOS_TARGET)
bool orogen_typekits::KUKACommanderTypekitPlugin::loadTypes()
{
    RTT::types::TypeInfoRepository::shared_ptr ti_repository = RTT::types::TypeInfoRepository::Instance();

    RTT::types::TypeInfoGenerator* ti = 0;
    
        
    ti = KUKACommanderData_TypeInfo();
    ti_repository->addType( ti );
        
    
        
    ti = std_string_TypeInfo();
    ti_repository->addType( ti );
        
    
        
    ti = std_vector__double__TypeInfo();
    ti_repository->addType( ti );
        
    

    return true;
}

bool orogen_typekits::KUKACommanderTypekitPlugin::loadOperators()
{ return true; }
bool orogen_typekits::KUKACommanderTypekitPlugin::loadConstructors()
{ return true; }
std::string orogen_typekits::KUKACommanderTypekitPlugin::getName()
{ return "/orogen/KUKACommander"; }

ORO_TYPEKIT_PLUGIN(orogen_typekits::KUKACommanderTypekitPlugin);

