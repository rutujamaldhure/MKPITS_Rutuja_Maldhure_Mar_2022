#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b,c,p;
    system ("cls");
    printf("Enter length of 1st side ");
    scanf("%f",&a);
    printf("Enter length of 2nd side ");
    scanf("%f",&b);
    printf("Enter length of 3rd side ");
    scanf("%f",&c);
    if((a+b)>c && (a+c)>b && (b+c)>a )
    {
        p=a+b+c;
        printf("Triangle is possible \nPerimeter of triangle is %.2f",p);
    }
    else
    {
        printf("Not possible to form a triangle with this diamension");
    }

}