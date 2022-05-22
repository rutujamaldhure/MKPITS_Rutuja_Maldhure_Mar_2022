/*
 G G G G G G G
   E E E E E
     C C C
       A
*/
#include<stdio.h>
void main()
{
    int i, j, sp, n='G';
    system("cls");
    for(i=4; i>=1; i--)
    {
        for(sp=1; sp<=41-i; sp++)
        {
            printf(" ");
        }

        for(j=4; j>=1; j--)
        {
            if(j<=i)
            printf("%c ",n);
            else
            printf(" ");
        }
        for(j=1; j<=4; j++)
        {
            if(j<i)
            printf("%c ",n);
        }
        n=n-2;
        printf("\n");
    }
}