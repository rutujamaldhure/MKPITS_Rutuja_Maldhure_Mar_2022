#include<stdio.h>
void main ()
{
    int i;
    system("cls");
    printf("All even numbers from 1 to 50 are-");
    i=1;
    do
    {
        if(i%2==0)
        printf("%d\n",i);
        i++;
    } while (i<=50);
    
}