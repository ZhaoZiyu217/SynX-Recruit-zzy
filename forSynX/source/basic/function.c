#include <stdio.h>

long factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int number;
    
    printf("Enter a non-negative integer: ");
    scanf("%d", &number);
    
    if (number < 0) {
        printf("Error: Factorial is defined only for non-negative integers.\n");
    } else {
        long result = factorial(number);
        printf("%d! = %ld\n", number, result);
    }
    
    return 0;
}