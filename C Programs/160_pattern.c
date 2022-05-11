/*
1
10
100
1000
10000
100000
1000000
10000000
1000000
100000
10000
1000
100
10
1*/

#include<stdio.h>
void main()
{
    int i,j;
    system("cls");
    for(i=1; i<=8; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(j==1)
            printf("1");
            else
            printf("0");
        }
        printf("\n");
    }
     for(i=7; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            if(j==1)
            printf("1");
            else
            printf("0");
        }
        printf("\n");
    }
    
}