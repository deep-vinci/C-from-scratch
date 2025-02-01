#include <stdio.h>

struct A
{
    int b : 1;
};

typedef struct A a;

typedef struct
{
    int a;
} TestStruct;

int main(int argc, char *argv[])
{
    a obj;
    TestStruct obj2;

    obj.b = 1;
    obj2.a = 3;

    printf("%d\n", obj.b);
    printf("%d\n", obj2.a);
}