#include <stdio.h>

// ARRAY DECAY
// Size information is lost on passing array as a args to some functionS
// to mitigate this issue one can pass size value
// loop the arr like *(arr + 1)

// for sizeof(*integerArray) the variable integerArray points to memory address as &a[0]

int main(int agrc, char *argv[])
{
    int integerArray[] = {1, 2, 3, 4};

    printf("Len of array %ld\n", sizeof(integerArray) / sizeof(*integerArray));
}