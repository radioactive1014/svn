/* Generated from orogen/lib/orogen/templates/typekit/mqueue/TransportPlugin.hpp */

#ifndef __OROGEN_GENERATED_KUKACOMMANDER_MQUEUE_PLUGIN_HPP
#define __OROGEN_GENERATED_KUKACOMMANDER_MQUEUE_PLUGIN_HPP

#include <rtt/types/TransportPlugin.hpp>

namespace Typelib {
    class Registry;
}
namespace orogen_typekits {
    class KUKACommanderMQueueTransportPlugin
        : public RTT::types::TransportPlugin
    {
        Typelib::Registry* m_registry;

    public:
        KUKACommanderMQueueTransportPlugin();
        ~KUKACommanderMQueueTransportPlugin();

        virtual bool registerTransport(std::string type_name, RTT::types::TypeInfo* ti);
        virtual std::string getTransportName() const;
        virtual std::string getTypekitName() const;
        virtual std::string getName() const;
    };

    extern KUKACommanderMQueueTransportPlugin KUKACommanderMQueueTransport;
}

#endif

