//write a program to print the roots of Bhaskara's formula from the given three floating number.
//display a message if it is not possible to find the roots.
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main ()
{
    float a, b,c,d,x1,x2;
    system("cls");
    printf("Enter value of a: ");
    scanf("%f",&a);
    printf("Enter value of b: ");
    scanf("%f",&b);
    printf("Enter value of c: ");
    scanf("%f",&c);
    d=(b*b)-(4*a*c);
    
    if(d>0 && a!=0)
    {
        d=sqrt(d);
        x1=(-b+d)/(2*a);
        x2=(-b-d)/(2*a);
        printf("Roots of given quadratic equation is \nx1= %.2fand \nx2=%.2f",x1,x2);
    }
    else
    {
        printf("Imposible to find the roots of given equation");
    }
}