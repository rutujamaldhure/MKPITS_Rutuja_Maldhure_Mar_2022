#include<stdio.h>
int oddsum(int x, int y)
{
    int sum=0;
    if(x%2!=0)
    sum=sum+x;
    if(y%2!=0)
    sum=sum+y;
    return sum;
}
void main()
{
    int num1,num2,r;
    system("cls");
    printf("Enter 1st number ");
    scanf("%d",&num1);
    printf("Enter 2nd number ");
    scanf("%d",&num2);
    r=oddsum(num1,num2);
    printf("sum= %d",r);;
}
