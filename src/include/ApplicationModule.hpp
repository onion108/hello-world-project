#ifndef __APPLICATION_MODULE_HPP__
#define __APPLICATION_MODULE_HPP__

#include "ArgParser.hpp"
#include "meta.hpp"
#include <string>

/**
 * A class that represents an application.
 */
class HelloWorldApplication {

    /**
     * The command-line argument parser.
     */
    ArgParser arg_parser;

    /**
     * The language name.
     */
    std::string language;

    /**
     * Normally run the program.
     * @returns The exit status.
     */
    int _normal();

    /**
     * Print the version number.
     */
    void _version();

    /**
     * Print the help message.
     */
    void _help();

    public:

    /**
     * The constructor.
     */
    HelloWorldApplication(int argc, char** argv, bool run_immediately = false);

    /**
     * Run the program.
     * @returns The exit code of the program.
     */
    int run();

};

#endif /* __APPLICATION_MODULE_HPP__ */
