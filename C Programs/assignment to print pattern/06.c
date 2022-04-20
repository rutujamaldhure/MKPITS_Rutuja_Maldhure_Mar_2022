/*
1
2 3
4 5 6
7 8 9 10
*/
#include<stdio.h>
void main ()
{
    int c,r,n=1;
    system("cls");
    for(r=1;r<=4;r++)
    {
        for(c=1;c<=r;c++)
        {
            printf("%d ",n);
            n=n+1;
        }
        printf("\n");
    }
}