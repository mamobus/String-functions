#include <string>
#include <stdio.h>
#include <math.h>
#include "str_funcs.h"
#include <assert.h>
#include <malloc.h>

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
    assert((src != nullptr) && (dest != nullptr));

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
    assert((src != nullptr) && (dest != nullptr));

    size_t dest_length = str_length(dest); //это норма? Норма ли юзать str_length внутри других функций, если можно оптимизировать?

    for(size_t i = 0; src[i] != 0; i++)
    {
        dest[dest_length + i] = src[i];
    }
    return dest;
}

char *str_nCAT(char *dest, const char *src, size_t count)
{
    assert((src != nullptr) && (dest != nullptr));

    size_t dest_length = str_length(dest); 

    for(size_t copy_count = 0; (copy_count < count); copy_count++)
    {
        if(src[copy_count] != 0)
            dest[dest_length + copy_count] = src[copy_count];
        else
        {
            dest[dest_length + copy_count] = 0;
            break;
        }
    }
    return dest;
}

char *f_get_s(char *str, int count, FILE *file)
{
    assert((file != nullptr) && (str != nullptr));
    if(count == 0)
    return str;

    size_t i = 0;

    for(int temp_ch = 0; (temp_ch != (int) "\r") && (temp_ch != EOF) && (i < (count - 1)); i++)
    {
        temp_ch = fgetc(file);
        str[i] = (char) temp_ch;
        // (*(str + i)) = temp_ch;
    }
    str[i + 1] = 0;
    
    return str;
}

char *str_dup(const char *str)
{
    char *str_copy = (char*) malloc(sizeof(str));
    printf("%d", sizeof(str));
    return str_copy; 
}
//puts, strchr, strlen, strcpy, strncpy, strcat, strncat, fgets, strdup, getline - именно в таком порядке. 



//Разделять логические блоки
//циклы for
//double *a
//вопрос про size_t
//i++ ++i
//документация квадратки
