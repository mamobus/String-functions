#include <string>
#include <stdio.h>
#include <math.h>
#include "str_funcs.h"
#include <assert.h>

int put_str(const char str[])
{
    assert(str != nullptr);

    for (int i = 0; str[i] != 0; ++i)
    {
        if (putchar(str[i]) == EOF) 
            return EOF;
    }
    putchar('\n');
    return str[0];
}   

char* str_chr(char *str, int ch)
{              
    assert(str != nullptr); 
    
    for (int i = 0; str[i] != 0; ++i)
    {
        if (str[i] == ch) 
            return &str[i];
    }
    return nullptr;
}

size_t str_length(const char *str)
{
    assert(str !=0);

    size_t i = 0;
    for (i = 0; str[i] != 0; i++)
        ;
    return i;   
}



/**
 * @brief copies src string to dest
 * 
 * Is unsafe to use, because of can rewrite memory cells you dont knows what is inside
 * 
 * @param dest destinion string
 * @param src source string
 * 
 * @return char first copied char
 */

char *str_copy(char *dest, const char *src)
{
    assert((dest != 0) && (src != 0));
    
    size_t i = 0;

    while(true)
    {
        dest[i] = src[i];
        if (src[i] =
        = 0)
            return dest;
        i++;        
    }
    return nullptr;
}

char *str_ncopy(char *dest, const char *src, size_t count)
{   
    size_t dest_size = str_length(dest);
    char dest_copy[dest_size + 1];
    str_copy(dest_copy, dest);


    return;
} 
//puts, strchr, strlen, strcpy, strncpy, strcat, strncat, fgets, strdup, getline - именно в таком порядке. 



//Разделять логические блоки
//циклы for
//double *a
//вопрос про size_t
//i++ ++i
//документация квадратки
