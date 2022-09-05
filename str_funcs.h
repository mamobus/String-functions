#ifndef STR_FUNCS_H
#define STR_FUNCS_H

#include <math.h>

int put_str(const char str[]);

char* str_chr(char *str, int ch);

size_t str_length(const char *str);

char *str_copy(char *dest, const char *src);

#endif //STR_FUNCS_H