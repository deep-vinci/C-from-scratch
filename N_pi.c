#include <stdio.h>
#include <math.h>

void main(int argc, char *argv[])
{
    float n = 100, r = 0;

    for (size_t i = 1; i <= n; i++)
    {
        r += (1 / pow(i, 4));
    }

    printf("%f\n", r);

    long double eulers_exp = pow((r * 90), (double)1 / 4);

    printf("%.100Lf", eulers_exp);
}
