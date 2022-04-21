/*
   *
  * *
 * * *
* * * * 
*/

#include<stdio.h>
void main()
{
    int r,str,sp;
    system("cls");
    for(r=1 ; r<=4 ; r++)
    {
        for(sp=1; sp<=41-r; sp++)
        {
            printf(" ");
        }
        for(str=1;str<=r;str++)
        {
            printf("* ");
        }
        printf("\n");
    }
}