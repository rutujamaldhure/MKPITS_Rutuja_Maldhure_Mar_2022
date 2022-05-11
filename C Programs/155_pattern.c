/*
EEEEE
DDDD
CCC
BB
E*/
#include<stdio.h>
void main()
{
    int i,j;
    char n='E';
    system("cls");
    for(i=5; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("%c", n);
        }
        printf("\n");
        n--;
    }
}