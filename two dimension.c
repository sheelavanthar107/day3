#include<stdio.h>
int row,col;
int harshitha[4][6]={{3,5,7},{8,3,9}};
int main()
{
    for(row=0;row<3;row++)
    {
        for(col=0;col<5;col++)
        {
            printf("%d\n",harshitha[row][col]);
        }
    }
    return 0;
}
