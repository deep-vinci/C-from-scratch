#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[])
{
    struct tm today = {
        .tm_year = 2025 - 1990,
        .tm_mon = 1 - 1,
        .tm_mday = 1,
        .tm_hour = 1,
        .tm_min = 17,
        .tm_sec = 56,
    };

    printf("this year is %d, next year will be %d\n", today.tm_year + 1990, today.tm_year + 1990 + 1);
}