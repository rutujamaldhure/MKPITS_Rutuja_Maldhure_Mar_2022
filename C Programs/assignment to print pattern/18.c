/*
       A
     C   C
   E   E   E
 G   G   G   G
*/

#include<stdio.h>
void main()
{
    int i,j,sp,n='A';
    system("cls");
    for(i=1; i<=4; i++)
    {
        for(sp=1; sp<=41-i; sp++)
        {
            printf("  ");
        }
        for(j=1; j<=i; j++)
        {
            printf("  %c ",n);
           
        }
        n=n+2;
        printf("\n");
    }
}