#include<stdio.h>
int gcd(int a, int b) {
    if (b == 0) {  // Base case: GCD is the first number if second number is zero
        return a;
    } else {
        return gcd(b, a % b);  // Recursive call with remainder as first number and original first number as second
    }
}

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    int result = gcd(num1, num2);

    printf("The greatest common divisor of %d and %d is %d.\n", num1, num2, result);

    return 0;
}
