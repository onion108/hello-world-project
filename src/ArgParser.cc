#include "include/ArgParser.hpp"
#include <cstring>
#include "include/l10n.hpp"

ArgParser::ArgParser(int argc, char** argv) {

    this->help_mode = false;
    this->verbose_mode = false;
    this->invalid_option = false;
    this->invalid_option_name = NULL;
    this->version_option = false;
    this->executable_name = argv[0];

    // Iterate over the argument list.
    for (int i = 1; i < argc; i++) {
        if ((!std::strcmp(argv[i], "--help")) || (!std::strcmp(argv[i], "-h"))) {
            this->help_mode = true;
            continue;
        }
        if ((!std::strcmp(argv[i], "--verbose")) || (!std::strcmp(argv[i], "-v"))) {
            this->verbose_mode = true;
            continue;
        }
        if ((!std::strcmp(argv[i], "--version")) || (!std::strcmp(argv[i], "-V"))) {
            this->version_option = true;
            continue;
        }
        invalid_option = true;
        invalid_option_name = argv[i];
        break;
    }

}

bool ArgParser::want_help() {
    return this->help_mode;
}

bool ArgParser::want_verbose() {
    return this->verbose_mode;
}

bool ArgParser::want_version_only() {
    return this->version_option;
}

const char * ArgParser::get_invalid_option_or_null() {
    return this->invalid_option_name;
}

const char * ArgParser::get_executable_name() {
    return this->executable_name;
}
