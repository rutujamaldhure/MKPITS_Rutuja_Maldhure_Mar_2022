/*
    *
  * *
* * *
*/
#include<stdio.h>
void main()
{
    int i,j;
    system("cls");
    for(i=3; i>=1; i--)
    {
        for (j=1; j<=3; j++)
        {
            if(i>j)
            printf("  ");
            else
            printf("* ");
        }
        printf("\n");
    }
}