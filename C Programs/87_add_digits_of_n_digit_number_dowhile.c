#include<stdio.h>
void main ()
{
    int num, backup, sum=0,n;
    system("cls");
    printf("Enter a number ");
    scanf("%d",&num);
    backup=num;
    do
    {
        n=num%10;
        sum=sum+n;
        num=num/10;
        printf("%d",n);
    }while(num>0);
    printf("sum of digits of %d is %d",backup,sum);
}
