/*
*
**
***
****
***
**
*
*/
#include<stdio.h>
void main ()
{
    int c,r;
    system("cls");
    for(r=1; r<=4; r++)
    {
        for(c=1; c<=r; c++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(r=1; r<4;r++)
    {
        for(c=3; c>=r; c--)
        {
            printf("* ");
        }
        printf("\n");
    }
}