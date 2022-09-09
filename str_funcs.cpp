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

char *str_copy(char *dest, const char *src)
{
    assert((dest != 0) && (src != 0));
    
    size_t i = 0;

    while(true)
    {
        dest[i] = src[i];
        if (src[i] == 0)
            return dest;
        i++;        
    }
    return nullptr;
}

char *str_ncopy(char *dest, const char *src, size_t count)
{   
    size_t i = 0;

    while(i < count)
    {
        if(src[i] != 0)
            dest[i] = src[i];
        else 
            dest[i] = 0;
        i++;
    }
    return dest;
} 

char *str_CAT(char *dest, const char *src)
{    
    size_t skipped = 0;

    for(skipped; dest[skipped] != 0; skipped++)
        ;
    for(size_t i = 0; src[i] != 0; i++)
    {
        dest[skipped+i] = src[i];
    }
    return dest;
}

char *str_nCAT(char *dest, const char *src, size_t count)
{
    size_t num1 = 0;

    // for(num1; (dest[num1] != 0); num1++)
    //     ;
    while(dest[num1] != 0)
        num1++;
    for(size_t num2 = 0; (num2 < count); num2++)
        if(src[num2] != 0)
            dest[num1 + num2] = src[num2];
        else
        {
            dest[num1 + num2] = 0;
            break;
        }
    return dest;
}
//puts, strchr, strlen, strcpy, strncpy, strcat, strncat, fgets, strdup, getline - именно в таком порядке. 



//Разделять логические блоки
//циклы for
//double *a
//вопрос про size_t
//i++ ++i
//документация квадратки
