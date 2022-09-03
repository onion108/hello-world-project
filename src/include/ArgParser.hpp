#ifndef __ARGPARSER__
#define __ARGPARSER__

/**
 * An argument parser.
 */
class ArgParser {

    private:

    /**
     * A flag that indicates if the help mode is on.
     */
    bool help_mode;

    /**
     * A flag that indicates if the verbose mode is on.
     */
    bool verbose_mode;

    /**
     * A flag that indicates if there is some invalid option.
     */
    bool invalid_option;

    /**
     * A flag that indicates if the user just want to check the version.
     */
    bool version_option;

    /**
     * The name of the invalid option, if possible.
     */
    const char * invalid_option_name;

    /**
     * The name of the executable name.
     */
    const char * executable_name;

    public:

    /**
     * Constructor of the `ArgParser`.
     */
    ArgParser(int argc, char** argv);

    /**
     * Check if the help option enabled.
     * @returns If the `--help` or `-h` option enabled.
     */
    bool want_help();
    
    /**
     * Check if the verbose option enabled.
     * @returns If the `--verbose` or `-v` option enabled.
     */
    bool want_verbose();

    /**
     * Check if just want a version.
     * @returns If the `--version` or `-V` option enabled.
     */
    bool want_version_only();

    /**
     * Know more about invalid options.
     * @returns The invalid option if exists, or `NULL` if there is nothing wrong.
     */
    const char * get_invalid_option_or_null();

    /**
     * Get the executable's name.
     * @returns The executable name.
     */
    const char * get_executable_name();

};

#endif /* __ARGPARSER__ */
