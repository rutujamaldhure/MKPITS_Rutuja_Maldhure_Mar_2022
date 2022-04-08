#include<stdio.h>
#include<conio.h>
void main ()
{
    int n1, n2, n3, n4 , n5, sum=0 , odd_num=0;
    system("cls");
    printf("Enter 5 numbers\n");
    scanf("%d %d %d %d %d",&n1, &n2 ,&n3 ,&n4 ,&n5);
    if(n1%2!=0)
    {
        odd_num=odd_num+1;
        sum=sum+n1;
    }

    if(n2%2!=0)
    {
        odd_num=odd_num+1;
        sum=sum+n2;
    }

    if(n3%2!=0)
    {
        odd_num=odd_num+1;
        sum=sum+n3;
    }

    if(n4%2!=0)
    {
        odd_num=odd_num+1;
        sum=sum+n4;
    }

    if(n5%2!=0)
    {
        odd_num=odd_num+1;
        sum=sum+n5;
    }

    printf("odd numbers = %d \nsum of odd numbers=%d",odd_num,sum);

}