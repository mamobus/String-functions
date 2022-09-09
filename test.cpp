#include <stdio.h>
#include "str_funcs.h"
#include <string.h>



int main() 
{
    char str[20] = "123456789";
    char ex_str[] = "abcdef";
    char *res = str_nCAT(str, ex_str, 4);
    // char *res = "123456789abc";
    printf("%s", res);
    return 0;
}