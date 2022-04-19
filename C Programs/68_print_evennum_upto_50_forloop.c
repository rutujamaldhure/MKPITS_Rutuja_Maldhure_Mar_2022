#include<stdio.h>
void main ()
{
    int i;
    system("cls");
    printf("All even numbers from 1 to 50 are-");
    
    for(i=1;i<=50;i++)
    {
        if(i%2==0)
        printf("%d\n",i);
    }
    
}