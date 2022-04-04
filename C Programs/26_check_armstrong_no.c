#include<stdio.h>
#include<conio.h>
void main()
{
int num,t, n1 ,n2, n3,arm;
printf("Enter 3 digit number ");
scanf("%d", &num);
n1= num%10;
t=num/10;
n2=t%10;
t=t/10;
n3=t%10;
arm=n1*n1*n1+n2*n2*n2+n3*n3*n3;
if(num==arm)
{
printf("%d is Armstrong Number",num);
}
else
{
printf("%d is not Armstrong Number",num);
}
}
