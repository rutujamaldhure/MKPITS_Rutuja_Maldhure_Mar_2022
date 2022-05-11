/*
    1
  2 2
3 3 3
*/
#include<stdio.h>
void main()
{
    int i,j;
    system("cls");
    for(i=1; i<=3; i++)
    {
        for(j=3; j>=1; j--)
        {
            if(j>i)
            printf("  ");
            if(j<=i)
            printf("%d ",i);
        }
        printf("\n");
    }
}