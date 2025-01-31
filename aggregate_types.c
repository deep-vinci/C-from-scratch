#include <stdio.h>

int main(int argc, char *argv[])
{
    struct birdStruct
    {
        char *jay;
        char *magpie;
        char *raven;
        char *chough;
    };

    struct birdStruct name = {
        .chough = "Joe",
        .jay = "jayfr",
        .magpie = "maggie",
        .raven = "ravan",
    };

    struct timeSpec
    {
        time_t tv_sec;
        long tv_nsec;
    }

    printf("%s", name);
}