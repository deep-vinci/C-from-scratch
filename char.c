#include "util.h"
#include <stdio.h>
#include <string.h>

void main(int argc, char *argv[])
{
    char a[] = "tests";
    char b[sizeof(a) / sizeof(*a)];
    char c[] = "tqzts";

    memcpy(b, a, sizeof(a) / sizeof(*a));                       // copy a to b;
    int compare = memcmp(a, c, sizeof(a) / sizeof(*a));         // compare a to c with len of c
    int index_of_char = memchr(a, 'e', sizeof(a) / sizeof(*a)); // search arr a for 'e' and get the index
    printf("%s", a);
    // printf("%ld", );
    br();
    // printf("%s\n", b);
    printf("%d\n", compare);
}