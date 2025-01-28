#include <stdio.h>

int* divisor_of_num(int a) {
    int arr_divisors[a];

    for(int i = 1; i < a; i++) {
        if (a%1 == 0) {
            arr_divisors[i] = i;
        }
    }
    return arr_divisors;
}

int main() {  
    printf("%d", divisor_of_num(10));
    
    return 0;
}