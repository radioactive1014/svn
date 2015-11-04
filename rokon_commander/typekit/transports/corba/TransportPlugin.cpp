/* Generated from orogen/lib/orogen/templates/typekit/corba/TransportPlugin.cpp */

// First load all RTT interfaces so that we get all "extern template"
// declarations in the TypekitImpl files
#include "transports/corba/Registration.hpp"
#include "transports/corba/TransportPlugin.hpp"
#include <rtt/transports/corba/CorbaLib.hpp>
#include <rtt/types/TypekitPlugin.hpp>
using namespace RTT;

bool orogen_typekits::KUKACommanderCorbaTransportPlugin::registerTransport(std::string type_name, RTT::types::TypeInfo* ti)
{
    if(ti->hasProtocol(ORO_CORBA_PROTOCOL_ID))
	return false;

    
    if ("/KUKACommanderData" == type_name)
    {
        return ti->addProtocol(ORO_CORBA_PROTOCOL_ID,
            KUKACommanderData_CorbaTransport());
    }
    
    else if ("/std/string" == type_name)
    {
        return ti->addProtocol(ORO_CORBA_PROTOCOL_ID,
            std_string_CorbaTransport());
    }
    
    else if ("/std/vector</double>" == type_name)
    {
        return ti->addProtocol(ORO_CORBA_PROTOCOL_ID,
            std_vector__double__CorbaTransport());
    }
    
    return false;
}
std::string orogen_typekits::KUKACommanderCorbaTransportPlugin::getTransportName() const
{ return "CORBA"; }
std::string orogen_typekits::KUKACommanderCorbaTransportPlugin::getTypekitName() const
{ return "/orogen/KUKACommander"; }
std::string orogen_typekits::KUKACommanderCorbaTransportPlugin::getName() const
{ return "/orogen/KUKACommander/CORBA"; }

ORO_TYPEKIT_PLUGIN(orogen_typekits::KUKACommanderCorbaTransportPlugin);

