#include "include/ApplicationModule.hpp"
#include "include/l10n.hpp"
#include <cstdlib>
#include <vector>
#include <iostream>

std::vector<std::string> _s_split(std::string s, char pat) {

    // Prepare variables.
    std::string buffer;
    std::vector<std::string> result;

    // Split the string.
    for (auto i : s) {
        if (i == pat && !buffer.empty()) {
            result.push_back(buffer);
            buffer.clear();
            continue;
        }
        buffer.push_back(i);
    }

    if (!buffer.empty()) {
        result.push_back(buffer);
    }

    return result;
}

HelloWorldApplication::HelloWorldApplication(int argc, char** argv, bool run_immediately) : arg_parser(argc, argv) {

    // Detect the language.
    const char* lang_cstr = std::getenv("LANG");

    std::string lang_strobj = std::string(lang_cstr);

    auto locale = _s_split(lang_strobj, '.');
    if (locale.empty()) {
        if (arg_parser.want_verbose()) {
            std::cerr << "Warning: Cannot detect language: Invalid environment variable $LANG\n";
            std::cerr << "Set language to en_US. \n";
        }
        this->language = "en_US";
    } else {
        if (arg_parser.want_verbose()) {
            std::cerr << "Detected language: " << locale[0] << std::endl;
        }
        this->language = locale[0];
    }

    // Run if necessary.
    if (run_immediately) {
        run();
    }

}

int HelloWorldApplication::run() {
    
    // Check if the options are all valid.
    if (arg_parser.get_invalid_option_or_null()) {
        std::cerr << get_str(this->language.c_str(), STR_MSG_INVALID_OPTION) << arg_parser.get_invalid_option_or_null() << std::endl;
        _help();
        return -1;
    }

    // Check if just want the version or just want the help
    if (arg_parser.want_help()) {
        _help();
        return 0;
    }
    if (arg_parser.want_version_only()) {
        _version();
        return 0;
    }

    // Otherwise, run the program.
    return _normal();

}

void HelloWorldApplication::_help() {
    std::cerr << get_str(this->language.c_str(), STR_HELP_USAGE_PREFIX) << arg_parser.get_executable_name() << get_str(this->language.c_str(), STR_HELP_USAGE_SUFFIX) << std::endl;
}

void HelloWorldApplication::_version() {
    std::cerr << _VERSION_ << std::endl;
}

int HelloWorldApplication::_normal() {
    std::cout << get_str(this->language.c_str(), STR_HELLO_WORLD) << std::endl;
    return 0;
}
