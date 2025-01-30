#include <stdio.h>

int arr_len(int arr[])
{
    for (size_t i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("%zu", sizeof(arr));
    return sizeof(arr);
}

void main(int argc, char *argv[])
{
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int b = 2;

    int len_of_arr0 = arr_len(a);
    int len_of_arr1 = sizeof(a);
    int len_of_arr2 = sizeof(a) / sizeof(a[0]);
    printf("%lu %lu %d %d %d %d", sizeof(b), sizeof(a), len_of_arr0, len_of_arr1, len_of_arr2, *a);
}