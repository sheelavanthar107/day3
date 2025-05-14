#include <stdio.h>
int main() {
    int n,c;
    printf("enter the value of n\n");
    scanf("%d",&n);
    if(n==0){
        printf("1");
    }
    else{
        c= n*(n-1);
        printf("%d",c);
}
}
