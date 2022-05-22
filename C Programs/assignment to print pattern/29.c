/*
1 2 3 4 5 6 7
  1 2 3 4 5
    1 2 3
      1
*/
#include<stdio.h>
void main()
{
    int i, j, sp, n=1;
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
                printf("%d ",n);
                n++;
            }
            else
            printf(" ");
        }
        for(j=1; j<=4; j++)
        {
            if(j<i)
            {
                printf("%d ",n);
                n++;
            }
        }
        n=1;
        printf("\n");
    }
}