#include "variadic_functions.h"

void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list arg;
    unsigned int i;
    const char *s;

    va_start(arg, n);

    for (i = 0; i < n; i++)
    {
        s = va_arg(arg, const char *);

        if (!s)
            printf("(nil)");
        else
            printf("%s", s);
        if (separator && i < n - 1)
            printf("%s", separator);
    }

    va_end(arg);

    printf("\n");
}