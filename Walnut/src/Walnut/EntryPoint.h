#pragma once

#ifndef WN_PLATFORM_WINDOWS

extern Walnut::Application* Walnut::CreateApplication();

int main(int argc, char** argv){
    Walnut::Log::init();
    WN_CORE_WARN("Initialized Log!");
    int a = 5;
    WN_INFO("Starting App.. Var={0}", a);

    auto app = Walnut::CreateApplication();
    app->Run();
    delete app;
}
#endif