#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of int pointer: %lu bytes\n", sizeof(int *));
    return 0;
}
