/*
1
1 0
1 0 1
1 0 1 0
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
            if(c%2==0)
            printf("0 ");
            else
            printf("1 ");
        }
        printf("\n");
    }
}