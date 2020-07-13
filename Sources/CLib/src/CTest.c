#include "CTest.h"
#include <stdarg.h>

void test_va_arg_str(int num, va_list args)
{
    printf("Printing %i strings...\n", num);
    for (int i = 0; i < num; i++) {
        const char * str = va_arg(args, const char *);
        puts(str);
    }
}

void test_va_arg_int(int num, va_list args)
{
    printf("Printing %i integers...\n", num);
    for (int i = 0; i < num; i++) {
        int foo = va_arg(args, int);
        printf("%i\n", foo);
    }
}

void test_str_print(const char * str)
{
    puts(str);
}
