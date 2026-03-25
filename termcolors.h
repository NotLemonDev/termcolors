#ifdef _WIN32
#include <windows.h>
#endif

void init_ansi() {
#ifdef _WIN32
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD dwMode = 0;
    GetConsoleMode(hOut, &dwMode);
    dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
    SetConsoleMode(hOut, dwMode);
#else
    // linux: nothing needed
#endif
}
#define BLUE(s) "\x1b[34m" s "\x1b[0m"
#define GREEN(s) "\x1b[32m" s "\x1b[0m"
#define RED(s) "\x1b[31m" s "\x1b[0m"
