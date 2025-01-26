#include <stdio.h>

int power_of_num (int a, int b) {
    int product = 1;

    for(int i = 1; i <= b; i++) {
        product *= a;
    }

    return product;
}
int main() {
    printf("%d", power_of_num(2, 3));
    
    return 0;
}