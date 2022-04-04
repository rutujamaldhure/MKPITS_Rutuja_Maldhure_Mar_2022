#include<stdio.h>
#include<conio.h>
void main()
{
int num,t, n1 ,n2, n3, rev;
printf("Enter 3 digit number ");
scanf("%d", &num);
n1= num%10;
t=num/10;
n2=t%10;
t=t/10;
n3=t%10;
rev= n1*100+n2*10+n3;
if(rev==num)
{
printf("%d is Palindrom Number",num);
}
else
{
printf("%d is not Palindrom Number",num);
}
}
