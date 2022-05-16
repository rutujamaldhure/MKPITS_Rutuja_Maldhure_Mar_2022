/*
      1
    3 2 1
  5 4 3 2 1
7 6 5 4 3 2 1
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
            printf("%d ",n);
            n--;
        }
        for(j=1; j<i; j++)
        {
            printf("%d ",n);
            n--;
        }
        n=1+i+j;
        printf("\n");
    }
}