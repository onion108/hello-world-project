#include "include/l10n.hpp"
#include <cstring>
#include <cwchar>

const char * get_str(const char *lang_name, int key) {
    if (!strcmp(lang_name, "zh_CN")) {
        // Chinese.
        switch (key) {
            case STR_HELLO_WORLD:
            return "你好，世界！";
            case STR_MSG_INVALID_OPTION:
            return "错误：非法的选项：";
            case STR_HELP_USAGE_PREFIX:
            return "一个简单的入门演示程序。\n\n用法 \n\t";
            case STR_HELP_USAGE_SUFFIX:
            return " [--help|-h] [--version|-V] [--verbose|-v]\n\n选项\n\t-h, --help\t显示帮助信息。 \n\t-V, --version\t显示版本号。\n\t-v, --verbose\t启用冗长的输出。";
            default:
            return "<非法字符串>";
        }
    } else if (!strcmp(lang_name, "de_DE")) {
        // Deutsch.
        switch (key) {
            case STR_HELLO_WORLD:
            return "Hallo, Welt!";
            case STR_MSG_INVALID_OPTION:
            return "Fehler: Ungültige Option: ";
            case STR_HELP_USAGE_PREFIX:
            return "Ein einfaches Halloweltprogramm. \n\nVERWENDUNG \n\t";
            case STR_HELP_USAGE_SUFFIX:
            return " [--help|-h] [--version|-V] [--verbose|-v]\n\nOPTIONEN\n\t-h, --help\tZeigt die Hilfemeldung an. \n\t-V, --version\tVersionsnummer anzeigen.\n\t-v, --verbose\tAusführliche Anzeige aktivieren.";
            default:
            return "<ungültig>";
        }
    } else if (!strcmp(lang_name, "ja_JP")) {
        // Japanese.
        switch (key) {
            case STR_HELLO_WORLD:
            return "世界よ、こんにちは！";
            case STR_MSG_INVALID_OPTION:
            return "エラー：予期しないオプションを検出した：";
            case STR_HELP_USAGE_PREFIX:
            return "簡単な入門プログラムが一つ。\n\n利用方法 \n\t";
            case STR_HELP_USAGE_SUFFIX:
            return " [--help|-h] [--version|-V] [--verbose|-v]\n\nオプション\n\t-h, --help\tこのエルプメッセージを表示します。 \n\t-V, --version\tバーションナンバーを表示します。\n\t-v, --verbose\t冗長な出力が起用します";
            default:
            return "<エラー>";
        }
    } else if (!strcmp(lang_name, "vi_VN")) {
        // Việt.
        switch (key) {
            case STR_HELLO_WORLD:
            return "Chào thế giới.";
            case STR_MSG_INVALID_OPTION:
            return "Lỗi: tùy chọn không hợp: ";
            case STR_HELP_USAGE_PREFIX:
            return "Một chương trình vi tính đơn giản. \n\nDÙNG \n\t";
            case STR_HELP_USAGE_SUFFIX:
            return " [--help|-h] [--version|-V] [--verbose|-v]\n\nLỰA CHỌN\n\t-h, --help\tHiển thị thông điệp trợ giúp. \n\t-V, --version\tHiển thị số phiên bản.\n\t-v, --verbose\tBật trình bày chi tiết.";
            default:
            return "<không hợp>";
        }
    } else {
        switch (key) {
            case STR_HELLO_WORLD:
            return "Hello, World!";
            case STR_MSG_INVALID_OPTION:
            return "Error: Invalid option: ";
            case STR_HELP_USAGE_PREFIX:
            return "A simple hello-world program. \n\nUSAGE \n\t";
            case STR_HELP_USAGE_SUFFIX:
            return " [--help|-h] [--version|-V] [--verbose|-v]\n\nOPTIONS\n\t-h, --help\tDisplay the help message. \n\t-V, --version\tDisplay the version number.\n\t-v, --verbose\tEnable verbose display.";
            default:
            return "<invalid>";
        }
    }
}
