#include <stdio.h>

int main() {
    int a = 1<<20;

    int long b = 0;
    for(int i = 1; i <= a; i++) {
        b=b+i;
    }
    printf("%d %ld", a, b);
    return 0;
}