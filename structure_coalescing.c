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

struct uncoalescedBitFields
{
    int a : 1; // 2^1 is gonna be {0, 0} bits or 2 values
    int b : 2; // 2^3 is gonna be {0,0,0,0,0,0,0,0} bits or 8 values
};

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

    struct uncoalescedBitFields dataUncoalescedBitFields = {
        .a = 1,
        .b = 6,
    };

    printf("%ld\n", sizeof(dataUncoalesced));
    printf("%ld\n", sizeof(dataCoalesced));
    printf("%ld\n", sizeof(dataUncoalescedBitFields));
}