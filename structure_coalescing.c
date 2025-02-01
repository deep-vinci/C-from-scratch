#include <stdio.h>

// uncoalesced structure
struct data
{
    char a;
    int b;
    char c;
};

int main(int argc, char *argv[])
{
    struct data dataOne = {
        .a = 'A',
        .b = 21,
        .c = 'B',
    };

    printf("%ld", sizeof(dataOne));
}