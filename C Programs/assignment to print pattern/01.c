/*
1
12
123
1234
*/

#include<stdio.h>
void main()
{
    int r,c;
    system("cls");
    for(r=1;r<=4;r++)
    {
        for(c=1; c<=r; c++)
        {
        printf("%d",c);
        }
        printf("\n");
    }
}