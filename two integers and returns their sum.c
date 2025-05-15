#include <stdio.h>
int add(int a, int b) {
    return a + b;
}
int main() {
    int num1, num2, result;
    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);
    result = add(num1, num2);
    printf("Sum: %d\n", result);

    return 0;
}
