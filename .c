#include<stdio.h>
int main(){
    int row,col,i,j;
    printf("enter the rows and col:");
    scanf("%d%d",&row,&col);
    int a[row][col],b[row][col],c[row][col];
    for(i=0;i<row;i++){
    for(j=0;j<col;j++){
        printf("enter the element of matrix A:\n");
        scanf("%d",&a[i][j]);
    }
}
for(i=0;i<row;i++){
    for(j=0;j<col;j++){
        printf("enter the element of  matrix B:\n");
        scanf("%d",&b[i][j]);
    }
}
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d",c[i][j]);
        }
            printf("\n");
    }
    return 0;
}
