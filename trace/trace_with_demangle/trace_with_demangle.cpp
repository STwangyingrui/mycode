#include <iostream>
#include "stacktrace.h"
/*
#include <stdio.h>
#include <stdarg.h>

#define PRINT_BUF_SIZE 4096

//#define NDEBUG
#ifdef NDEBUG
#define my_printf_debug(fmt,...)
#define device_printf(fmt,...)
#else
#define my_printf_debug(fmt,...) my_printf(fmt, ##__VA_ARGS__)
#define device_printf(fmt,...) fprintf(stderr, fmt, ##__VA_ARGS__)
#endif

int my_printf(const char *fmt, ...)
{
    int retval = 0;
    char buffer[PRINT_BUF_SIZE];
    va_list ap;
    va_start(ap, fmt);
    retval = vsnprintf(buffer, PRINT_BUF_SIZE, fmt, ap);
    va_end(ap);
    fprintf(stderr, "%s", buffer);
    return retval;
}
*/
void func2() {
    std::cerr << "----" << std::endl;
    std::cerr << "call stack:" << std::endl;
    printStackTrace(std::cerr);
}

void func1() {
    func2();
}

int main() {
    func1();
    return 0;
}
