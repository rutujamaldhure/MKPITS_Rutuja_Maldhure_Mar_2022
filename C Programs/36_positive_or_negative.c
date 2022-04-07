#include<stdio.h>
void main ()
{
    int num;
    printf("Enter a number ");
    scanf("%d",&num);
    if(num>0)
    {
        printf("Entered no is positive");
    }
    else
    {
        printf("Entered no is negative");
    }
}