#include <stdio.h>
#include <stdint.h>

void main(int argc, char *argv[])
{

    // size_t represent the value from 0 to 2^64 - 1 [unsigned integers]
    // constant SIZE_MAX provides the max value that can be represented by size_t, it's present in stdint.h
    // crazy thing about overflow during calculation, the number wraps around from reverse so if SIZE_MAX is 18446744073709551615 the 2-3 for size_t is gonna be 18446744073709551615 - 1 = 18446744073709551614

    // , is such a trap for newcomers in c
    // depending on a sequence of function call is a trap that all the other high level languages allow, which c does not.
    printf("%lu\n", SIZE_MAX);
    size_t x = 2 - 4;
    printf("%lu\n", x);
}