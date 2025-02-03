#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    size_t name_len = strlen(argv[0]);
    char computed_name[name_len];

    for (size_t i = 0; i < name_len; i++)
    {
        computed_name[i] = argv[0][i + 2];
    }
    printf("%s\n", computed_name);
}