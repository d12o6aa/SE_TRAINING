#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    int i;
    while (argc--)
    {
        printf("%s\n", *argv++);
    }
    
    exit(EXIT_SUCCESS);
}
