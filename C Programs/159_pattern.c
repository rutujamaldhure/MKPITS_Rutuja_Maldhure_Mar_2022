/*
    A
  B B
C C C
*/
#include<stdio.h>
void main()
{
    int i,j;
    char n='A';
    system("cls");
    for(i=1; i<=3; i++)
    {
        for(j=3; j>=1; j--)
        {
            if(j>i)
            printf("  ");
            if(j<=i)
            {
                printf("%c ",n);
                
            }
        }
        printf("\n");
        n++;
    }
}