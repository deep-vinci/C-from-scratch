#include <stdio.h>

void main(int argc, [[__attribute_maybe_unused__]] char *argv[])
{
    // int n = 100`21;
    printf("Number of arguments %d \n", argc);

    char const *const path_name [[deprecated]];
    for (int i = 0; i < argc; i++)
    {
        printf("%s \n", argv[i]);
    }
}