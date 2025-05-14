#include <stdio.h>

int main() {
    int i, j;
    int rows, cols;
    
    // Ask for user input for the matrix dimensions
    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &rows, &cols);
    
    // Declare the matrices with fixed dimensions
    int a[rows][cols], b[rows][cols], c[rows][cols];
    
    // Input matrix A
    printf("Enter the elements of matrix A:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    // Input matrix B
    printf("Enter the elements of matrix B:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    
    // Matrix addition (A + B = C)
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    
    // Output the result matrix C
    printf("The sum of the matrices is:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d ", c[i][j]); // Added space for better formatting
        }
        printf("\n"); // Print a new line after each row
    }
    
    return 0;
}
