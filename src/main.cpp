// main.cpp — entry point. Wires config and subsystems together.

#include "aisubtitlegen/settings.h"
#include "aisubtitlegen/transcribe.h"
#include "aisubtitlegen/translate.h"
#include "aisubtitlegen/formats.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    aisubtitlegen::Settings settings = aisubtitlegen::Settings::load_default();
    aisubtitlegen::Transcribe transcribe(settings.store_path);
    aisubtitlegen::Translate translate(settings.store_path);
    aisubtitlegen::Formats formats(settings.store_path);
    std::fprintf(stderr, "[ai-subtitle-gen] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
