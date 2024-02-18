#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *create_array(unsigned int size, char c)
{
    unsigned int i;
    char *s;
    if (size == 0)
    {
        return (NULL);
    }
    c = (char*) malloc(size* sizeof(char));

    if (!s)
        return (NULL);
    
    for (i = 0; i < size; i++)
    {
        s[i] = c;
    }

    return (s);
}
