#include <stdio.h>

int divisor_of_num(int a) {
    for(int i = 1; i < a; i++) {
        printf("%d", a%i);
    }
    return 0;
}

int main() {  
    divisor_of_num(10);
    
    return 0;
}