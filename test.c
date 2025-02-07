#include <stdio.h>

int main(int argc, char *argv[])
{
    int a = 1;
    int *b = &a;

    printf("Address of a is (%p) \n", (void *)&a);
    printf("Address of b is (%p) \n", (void *)&b);
    printf("Address of b is (%p) \n", (void *)b);

    return 0;
}