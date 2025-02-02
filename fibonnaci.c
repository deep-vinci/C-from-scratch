#include <stdio.h>
#include <stdlib.h>

int fib(int n)
{
    if (n < 2)
    {
        return n;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}

int main(int argc, char *argv[argc + 1])
{
    int n = 5;
    if (argc > 1)
    {
        n = atoi(argv[1]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d = %d\n", i, fib(i));
    }

    return 0;
}