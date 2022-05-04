#include<stdio.h>
void oddsum(int x, int y)
{
    int sum=0,i;
    i=x;
    do
    {
        if(i%2!=0)
        sum=sum+i;
        i++;
    } while (i<=y);
    printf("sum of odd numbers = %d",sum);
}
void fun()
{
    int num1, num2;
    printf("Enter 1st number ");
    scanf("%d",&num1);
    printf("Enter 2nd number ");
    scanf("%d",&num2);
    oddsum(num1,num2);
}
void main()
{
    system("cls");
    fun ();
}
