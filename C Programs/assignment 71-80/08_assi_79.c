#include<stdio.h>
void main ()
{
    int num,mul;
    system("cls");
    printf("Enter any number: ");
    scanf("%d",&num);
    if(num%3==0)
    printf("%d is multiple of 3\n",num);
    if(num%7==0)
    printf("%d is multiple of 7",num);
    if(num%3!=0 && num%7!=0)
    printf("%d is not multiple of both 3 and 7",num);
}
    