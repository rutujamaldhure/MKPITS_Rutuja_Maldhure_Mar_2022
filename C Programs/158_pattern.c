/*
    1
  1 2
1 2 3
*/
#include<stdio.h>
void main()
{
    int i,j,n=1;
    system("cls");
    for(i=1; i<=3; i++)
    {
        for(j=3; j>=1; j--)
        {
            if(j>i)
            printf("  ");
            if(j<=i)
            {
                printf("%d ",n);
                n++;
            }
        }
        printf("\n");
        n=1;
    }
}