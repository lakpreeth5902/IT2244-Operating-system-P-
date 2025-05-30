#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() 
{
    printf("Program started.\n");

    printf("Sleeping for 3 seconds...\n");
    sleep(3);   // wait 3 seconds

    printf("Exiting the program.\n");
    exit(0);    // clean exit

    return 0;
}