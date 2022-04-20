/*
1 2 3 4 5
a a a a a
1 2 3 4 5
a a a a a
*/
#include<stdio.h>
void main()
{
    int r,c;
    system("cls");
    for(r=1; r<=4; r++)
    {
        for(c=1; c<=5; c++ )
        {
            if(r%2==0)
            printf("a ");
            else
            printf("%d ",c);
        }
        printf("\n");
    }
}