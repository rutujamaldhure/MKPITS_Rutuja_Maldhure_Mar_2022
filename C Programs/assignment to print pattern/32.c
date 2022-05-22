/*
 A B C D E F G
   A B C D E
     A B C
       A
*/
#include<stdio.h>
void main()
{
    int i, j, sp, n='A';
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
            {
                printf("%c ",n);
                n++;
            }
            else
            printf(" ");
        }
        for(j=1; j<=4; j++)
        {
            if(j<i)
            {
                printf("%c ",n);
                n++;
            }
        }
        n='A';
        printf("\n");
    }
}