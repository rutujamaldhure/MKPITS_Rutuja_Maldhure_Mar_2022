#include<stdio.h>
#include<conio.h>
void main ()
{
    int p,q,r,s;
    system("cls");
    printf("Enter 1st positive value ");
    scanf("%d",&p);
    printf("Enter 2nd positive value ");
    scanf("%d",&q);
    printf("Enter even value ");
    scanf("%d",&r);
    printf("Enter any number");
    scanf("%d",&s);
    if (q>r && s>p && (r+s)>(p+q))
    {
        printf("Entered values are correct");
    }
    else
    {
        printf("Entered values are wrong");
    }

}