#ifndef STR_FUNCS_H
#define STR_FUNCS_H

int put_str(const char str[]);

char* str_chr(char *str, int ch);

size_t str_length(const char *str);

char *str_copy(char *dest, const char *src);

char *str_ncopy(char *dest, const char *src,  size_t count);

char *str_CAT(char *dest, const char *src);

char *str_nCAT(char *dest, const char *src,  size_t count);

char *f_get_s(char *str, int count, FILE *file);

char *str_dup(const char *str);

#endif //STR_FUNCS_H