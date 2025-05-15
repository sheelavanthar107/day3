#include <stdio.h>
int square(int number) {
    return number * number;
}
int main() {
    int num, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    result = square(num);
    printf("The square of %d is %d\n", num, result);

    return 0;
}
