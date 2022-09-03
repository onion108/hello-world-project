#ifndef __L10N__
#define __L10N__

#define STR_MSG_INVALID_OPTION 0
#define STR_HELLO_WORLD 1
#define STR_HELP_USAGE_PREFIX 2
#define STR_HELP_USAGE_SUFFIX 3

const char * get_str(const char * lang_name, int key);

#endif /* __L10N__ */
