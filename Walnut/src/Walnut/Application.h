#pragma once

#include "Core.h"

namespace Walnut {
    class WALNUT_API Application
    {
    private:
        /* data */
    public:
        Application(/* args */);
        virtual ~Application();

        void Run();
    };

    // To be defined in CLIENT
    Application* CreateApplication();
}