#include <stdio.h>

int arr_len(int arr[])
{
    return sizeof(arr) / sizeof(*arr);
}

void line_break()
{
    puts("");
}

void main(int argc, char *argv[])
{
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int b = 2;

    int len_of_arr0 = sizeof(a) / sizeof(*a);
    int len_of_arr1 = sizeof(a) / sizeof(int);
    int len_of_arr2 = sizeof(a) / sizeof(a[0]);
    printf("%lu %lu %d %d %d %d", sizeof(b), sizeof(a), len_of_arr0, len_of_arr1, len_of_arr2, *a);
    line_break();
}