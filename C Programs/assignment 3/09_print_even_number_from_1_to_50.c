#include<stdio.h>
#include<conio.h>
void main ()
{
    int i;
    system("cls");
    i=1;
    while(i<=50)
    {
        if(i%2==0)
        {
            printf("%d, ",i);
        }
        i=i+1;
    }

}