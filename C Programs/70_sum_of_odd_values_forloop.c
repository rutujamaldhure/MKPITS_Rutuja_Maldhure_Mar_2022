#include<stdio.h>
void main ()
{
    int num1, num2,sum=0,i;
    system("cls");
    printf("Enter 1st number ");
    scanf("%d",&num1);
    printf("Enter 2nd number ");
    scanf("%d",&num2);

    for(i=num1;i<=num2;i++)
    {
        if(i%2!=0)
        sum=sum+i;
    }
    printf("sum of odd numbers = %d",sum);
    
}