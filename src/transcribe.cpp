// transcribe.cpp — part of ai-subtitle-gen.

#include "aisubtitlegen/transcribe.h"

#include <cstdio>

namespace aisubtitlegen {

Transcribe::Transcribe(const std::string& config_path)
    : config_path_(config_path) {}

void Transcribe::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Transcribe::run() {
    if (verbose_) std::fprintf(stderr, "[ai-subtitle-gen] transcribe: run\n");
    // core logic lives here
    return true;
}

}  // namespace aisubtitlegen
