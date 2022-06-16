#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Walnut
{
    class WALNUT_API Log {
    public:

        static void init();

        inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
        inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
    private:
        static std::shared_ptr<spdlog::logger> s_CoreLogger;
        static std::shared_ptr<spdlog::logger> s_ClientLogger;

    };
} // namespace Walnut

// Core log macros
#define WN_CORE_TRACE(...) ::Walnut::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define WN_CORE_WARN(...)  ::Walnut::Log::GetCoreLogger()->info(__VA_ARGS__)
#define WN_CORE_INFO(...)  ::Walnut::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define WN_CORE_ERROR(...) ::Walnut::Log::GetCoreLogger()->error(__VA_ARGS__)
#define WN_CORE_FATAL(...) ::Walnut::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define WN_TRACE(...) ::Walnut::Log::GetClientLogger()->trace(__VA_ARGS__)
#define WN_WARN(...)  ::Walnut::Log::GetClientLogger()->info(__VA_ARGS__)
#define WN_INFO(...)  ::Walnut::Log::GetClientLogger()->warn(__VA_ARGS__)
#define WN_ERROR(...) ::Walnut::Log::GetClientLogger()->error(__VA_ARGS__)
#define WN_FATAL(...) ::Walnut::Log::GetClientLogger()->fatal(__VA_ARGS__)