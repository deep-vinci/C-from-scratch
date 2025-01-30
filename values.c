#include <stdio.h>
#include <tgmath.h>

void main(int argc, char *argv[])
{
    int a = 0b11001;
    int b = 0xabc;
    double long c = 1.7E+20;

    double d = 0xCCP+0;

    double cplx = CMPLX(0.2, 0.3);

    printf("%d %d %Lf %f %f\n", a, b, c, d, cplx);
}