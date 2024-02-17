#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    if (argc == 1 || argc == 0)
    {
        printf("Error\n");
        return(1);
    }
    else
    {
        // the function atoi is convert a char to int
        int i = atoi(argv[1]) * atoi(argv[2]);
        printf("%d\n",i);
    }
    
    exit(EXIT_SUCCESS);
}
