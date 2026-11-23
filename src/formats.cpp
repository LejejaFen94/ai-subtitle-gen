// formats.cpp — part of ai-subtitle-gen.

#include "aisubtitlegen/formats.h"

#include <cstdio>

namespace aisubtitlegen {

Formats::Formats(const std::string& config_path)
    : config_path_(config_path) {}

void Formats::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Formats::run() {
    if (verbose_) std::fprintf(stderr, "[ai-subtitle-gen] formats: run\n");
    // core logic lives here
    return true;
}

}  // namespace aisubtitlegen
