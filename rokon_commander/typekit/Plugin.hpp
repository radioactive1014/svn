/* Generated from orogen/lib/orogen/templates/typekit/Plugin.hpp */

#ifndef __OROGEN_GENERATED_KUKACOMMANDER_TYPEKIT_HPP
#define __OROGEN_GENERATED_KUKACOMMANDER_TYPEKIT_HPP

#include <rtt/types/TypekitPlugin.hpp>

namespace Typelib {
    class Registry;
}

namespace orogen_typekits {
    class KUKACommanderTypekitPlugin
        : public RTT::types::TypekitPlugin
    {
        Typelib::Registry* m_registry;

    public:
        KUKACommanderTypekitPlugin();
        ~KUKACommanderTypekitPlugin();
        bool loadTypes();
        bool loadOperators();
        bool loadConstructors();
        std::string getName();
    };

    extern KUKACommanderTypekitPlugin KUKACommanderTypekit;
}

#endif


