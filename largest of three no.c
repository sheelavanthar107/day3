#include <stdio.h>
int findLargest(int a, int b, int c) {
    int largest;
   if (a >= b && a >= c) {
        largest = a;
    } else if (b >= a && b >= c) {
        largest = b;
    } else {
        largest = c;
    }
    return largest;
}
int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    int largest = findLargest(num1, num2, num3);
    printf("The largest number is: %d\n", largest);

    return 0;
}
