#include<stdio.h>
int oddsum ()
{
    int num1,num2,sum=0;
    printf("Enter 1st number ");
    scanf("%d",&num1);
    printf("Enter 2nd number ");
    scanf("%d",&num2);
    if(num1%2!=0)
    sum=sum+num1;
    if(num2%2!=0)
    sum=sum+num2;
    return sum;
}
void main()
{
    int r;
    system("cls");
    r=oddsum();
    printf("sum= %d",r);
}