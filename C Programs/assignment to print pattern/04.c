/*
A
AB
ABC
ABCD  
*/

#include<stdio.h>
void main()
{
    char r,c;
    system("cls");
    for(r='A'; r<='D'; r++)
    {
        for(c='A'; c<=r; c++)
        {
            printf("%c",c);
        }
        printf("\n");
    }
}