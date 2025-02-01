#include <stdio.h>

// uncoalesced structure
struct uncoalesced
{
    char a;
    int b;
    char c;
};

// coalesced structure
#pragma pack(1)

struct coalesced
{
    char b;
    char c;
    int a;
};

#pragma pack()

int main(int argc, char *argv[])
{
    struct uncoalesced dataUncoalesced = {
        .a = 'A',
        .b = 21,
        .c = 'B',
    };

    struct coalesced dataCoalesced = {
        .a = 2,
        .b = 'a',
        .c = 'c',
    };

    printf("%ld\n", sizeof(dataUncoalesced));
    printf("%ld\n", sizeof(dataCoalesced));
}