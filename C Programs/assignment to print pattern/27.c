/*
 * * * * * * *
   * * * * *
     * * *
       * 
*/
#include<stdio.h>
void main()
{
    int i, j, sp;
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
            printf("* ");
            else
            printf(" ");
        }
        for(j=1; j<=4; j++)
        {
            if(j<i)
            printf("* ");
        }

        printf("\n");
    }
}