/*
          0
        1 0 1
      2 1 0 1 2
    3 2 1 0 1 2 3 */

#include<stdio.h>
void main()
{
    int i,j,sp,n=0;
    system("cls");
    for(i=1; i<=10; i++)
    {
        for(sp=1; sp<=41-i; sp++)
        {
            printf("  ");
        }
        for(j=1; j<=i; j++)
        {
            printf(" %d",n);
            n--;
        }
        n=1;
        for(j=1; j<i; j++)
        {
            printf(" %d",n);
            n++;
        }
        n=j;
        printf("\n");
    }
}