#include<stdio.h>
void main()
{
    int num,n,backup,sum=0;
    system("cls");
    printf("Enter number= ");
    scanf("%d",&num);
    if(num>0 && num<500)
    {
        backup=num;
        for(;num>0;)
        {
            n=num%10;
            sum=sum+n;
            num=num/10;
        }
        printf("sum of digits of %d= %d",backup,sum);
    }
    else
    printf("Invalid Input\nPlease enter number less than 500");
}
