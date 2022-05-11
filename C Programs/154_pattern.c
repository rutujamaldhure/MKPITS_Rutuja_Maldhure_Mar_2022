/*
AAAAA
BBBB
CCC
DD
E*/
#include<stdio.h>
void main()
{
    int i,j;
    char n='A';
    system("cls");
    for(i=5; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}