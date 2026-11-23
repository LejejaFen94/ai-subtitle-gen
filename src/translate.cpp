// translate.cpp — part of ai-subtitle-gen.

#include "aisubtitlegen/translate.h"

#include <cstdio>

namespace aisubtitlegen {

Translate::Translate(const std::string& config_path)
    : config_path_(config_path) {}

void Translate::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Translate::run() {
    if (verbose_) std::fprintf(stderr, "[ai-subtitle-gen] translate: run\n");
    // core logic lives here
    return true;
}

}  // namespace aisubtitlegen
