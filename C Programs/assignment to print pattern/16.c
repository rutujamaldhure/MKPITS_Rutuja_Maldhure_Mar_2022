/*
       1
     3   3
   5   5   5
 7   7   7   7
*/

#include<stdio.h>
void main()
{
    int i,j,sp,n=1;
    system("cls");
    for(i=1; i<=4; i++)
    {
        for(sp=1; sp<=41-i; sp++)
        {
            printf("  ");
        }
        for(j=1; j<=i; j++)
        {
            printf("  %d ",n);
           
        }
        n=n+2;
        printf("\n");
    }
}