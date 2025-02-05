#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// int *arr = (int *)malloc(5 * sizeof(int))
// int **arr = &arr;

void resize_arr(int **arr, int *size, int new_size)
{
    int *new_arr = (int *)malloc(new_size * sizeof(int));

    int i;
    for (i = 0; i < *size && i < new_size; i++)
    {
        new_arr[i] = (*arr)[i];
    }

    free(*arr);

    *arr = new_arr;
    *size = new_size;
}

void print_arr(int **arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", (*arr)[i]);
    }
    printf("\n");
}
void main()
{
    int *arr, i, size = 5;
    arr = (int *)malloc(size * sizeof(int));
    clrscr();

    for (i = 0; i < size; i++)
    {
        arr[i] = i + 1;
    }
    print_arr(&arr, size);

    // resize
    resize_arr(&arr, &size, 10);
    print_arr(&arr, size);

    // downsize
    resize_arr(&arr, &size, 3);
    print_arr(&arr, size);

    getch();
}