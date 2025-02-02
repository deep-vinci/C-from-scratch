#include <stdio.h>
#include <assert.h>

int addRecursively(int n)
{
    assert(!(n > 1000));
    if (n == 0)
    {
        return 0;
    }

    return n + addRecursively(n - 1);
}
int main(int argc, char *argv[argc + 1])
{
    printf("%d\n", addRecursively(10));
}