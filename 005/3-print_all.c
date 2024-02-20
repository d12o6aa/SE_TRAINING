#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 * @format:  is a list of types of arguments passed to the function
 * 
 * Return: void
*/

void print_all(const char * const format, ...)
{
    va_list arg;
    int i = 0;
    char *str;
    char current_format;
    int current_int;
    double current_double;


    va_start(arg, format);

    while (format && format[i])
    {
        current_format = format[i];
        
        switch (current_format)
        {
        case 'c':
            printf("%c",va_arg(arg, int));
            break;
        case 'i':
            current_int = va_arg(arg, int);
            printf("%d",current_int);
            break;
        case 'f':
            current_double = va_arg(arg, double);
            printf("%f",current_double);
            break;
        case 's':
            str = va_arg(arg, char *);
            if (!str)
                printf("(nil)");
            else
                printf("%s",str);
            break;
        
        default:
            break;
        }

        if ((format[i + 1]) && (current_format == 'c' || current_format == 'i' || current_format == 'f' || current_format == 's'))
            printf(", ");
        i++;
    }

    va_end(arg);

    printf("\n");
    
}