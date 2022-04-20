/*
ABCD
abc
AB
a  
*/

#include<stdio.h>
void main()
{
    char r,c;
    system("cls");
    for(r=68; r>=65; r--)
    {
        for(c=65; c<=r; c++)
        {
            if(r%2==0)
            printf("%c",c);
            else
            printf("%c",c+32);
        }
        printf("\n");
    }
}