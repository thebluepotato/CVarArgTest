#ifndef CTest_h
#define CTest_h

#include <stdio.h>

/// Prints out the strings provided in args
/// @param num The number of strings in `args`
/// @param args A `va_list` of strings
void test_va_arg_str(int num, va_list args);

/// Prints out the integers provided in args
/// @param num The number of integers in `args`
/// @param args A `va_list` of integers
void test_va_arg_int(int num, va_list args);

/// Just prints the string
/// @param str The string
void test_str_print(const char * str);

#endif /* CTest_h */
