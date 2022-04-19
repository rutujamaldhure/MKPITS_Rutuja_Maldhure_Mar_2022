#include<stdio.h>
void main ()
{
    int num1, num2,sum=0,i;
    system("cls");
    printf("Enter 1st number ");
    scanf("%d",&num1);
    printf("Enter 2nd number ");
    scanf("%d",&num2);
    
    i=num1;
    do
    {
        if(i%2!=0)
        sum=sum+i;
        i++;
    } while (i<=num2);
    printf("sum of odd numbers = %d",sum);
    
}