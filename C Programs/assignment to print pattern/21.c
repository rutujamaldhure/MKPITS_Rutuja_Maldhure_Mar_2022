/*
      A
    C B A
  E D C B A
G F E D C B A
*/

#include<stdio.h>
void main()
{
    int i,j,sp,n=65;
    system("cls");
    for(i=1; i<=4; i++)
    {
        for(sp=1; sp<=41-i; sp++)
        {
            printf("  ");
        }
       
        for(j=1; j<=i; j++)
        {
            printf("%c ",n);
            n--;
        }
        for(j=1; j<i; j++)
        {
            printf("%c ",n);
            n--;
        }
        n=65+j+i;
        printf("\n");
    }
}