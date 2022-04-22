#include<stdio.h>
void main ()
{
    int num, i;
    system("cls");
    printf("Enter any number- ");
    scanf("%d",&num);
    printf("Divisors of this number are- ");
    for(i=1; i<=num; i++)
    {
        if(num%i==0)
        {
            printf("%d ",i);
        }
    }
}