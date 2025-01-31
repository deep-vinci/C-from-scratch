#include <stdio.h>
#include <time.h>

#define DAYS_BEFORE (int[12]{0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334})

struct tm time_set_yday(struct tm t)
{
    t.tm_yday =
}

int main(int argc, char *argv[])
{

    struct tm
    {
        int tm_sec;   // Seconds after the minute
        int tm_min;   // Minutes after the hour
        int tm_hour;  // Hours since midnight
        int tm_mday;  // Day of the month
        int tm_mon;   // Months since January
        int tm_year;  // Years since 1900
        int tm_wday;  // Days since Sunday
        int tm_yday;  // Days since January
        int tm_isdst; // Daylight Saving Time flag
    };

    struct tm today = {
        .tm_year = 2025 - 1990,
        .tm_mon = 1 - 1,
        .tm_mday = 1,
        .tm_hour = 1,
        .tm_min = 17,
        .tm_sec = 56,
    };

    printf("this year is %d, next year will be %d\n", today.tm_year + 1990, today.tm_year + 1990 + 1);
    // today
}