#include <stdio.h>

void main(int argc, char *argv[])
{
    // size_t preferred over int as its unsigned
    // hence longer available positive number as counting in -ve doesn't makes sense
    for (size_t i = 0; i < 10; i++)
    {
        puts("something");
    }
}