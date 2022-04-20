/*
1234
123
12
1
*/

#include<stdio.h>
void main()
{
    int r,c;
    system("cls");
    for(r=4;r>=1;r--)
    {
        for(c=1;c<=r;c++)
        {
            printf("%d",c);
        }
        printf("\n");
    }
}
