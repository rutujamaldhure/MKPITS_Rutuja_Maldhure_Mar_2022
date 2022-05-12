#include<stdio.h>
void main()
{
    int a,b,c;
    system("cls");
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    printf("Enter 3rd number: ");
    scanf("%d",&c);
    if(a+b==c || a+c==b || b+c==a)
    {
        printf("possible to get one integer by adding other two");
    }
    else
    printf("not possible");
}