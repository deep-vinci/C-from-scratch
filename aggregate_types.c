#include <stdio.h>

int main(int argc, char *argv[])
{
    // struct birdStruct
    // {
    //     char *jay;
    //     char *magpie;
    //     char *raven;
    //     char *chough;
    // };

    // struct birdStruct name = {
    //     .chough = "Joe",
    //     .jay = "jayfr",
    //     .magpie = "maggie",
    //     .raven = "ravan",
    // };

    // struct timeSpec
    // {
    //     time_t tv_sec;
    //     long tv_nsec;
    // }

    // struct tm
    // {
    //     int tm_sec;   // Seconds after the minute
    //     int tm_min;   // Minutes after the hour
    //     int tm_hour;  // Hours since midnight
    //     int tm_mday;  // Day of the month
    //     int tm_mon;   // Months since January
    //     int tm_year;  // Years since 1900
    //     int tm_wday;  // Days since Sunday
    //     int tm_yday;  // Days since January
    //     int tm_isdst; // Daylight Saving Time flag
    // };

    struct nestedStruct
    {
        char *name;
        struct stardate
        {
            int mock;
            // struct tm date;
            // struct timespec precision;
        };
    };

    struct nestedStruct mocked = {
        .name = "daslij",
    };

#pragma pack(1)
    struct NetworkPacket
    {
        int b;
        char a;
    };

    struct NetworkPacket data = {
        .a = 'A',
        .b = 69,
    };
    printf("%lu", sizeof(data));
    printf("%s", mocked.name);
}