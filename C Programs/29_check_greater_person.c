#include<stdio.h>
#include<conio.h>
void main ()
{
    int p1, p2, p3;
    printf("Enter age of 1st person: ");
    scanf("%d",&p1);
    printf("Enter age of 2nd person: ");
    scanf("%d",&p2);
    printf("Enter age of 3rd person: ");
    scanf("%d",&p3);
    if(p1>p2 && p1>p3)
    {
        printf("1st person is greater");
    }
    else
    if(p2>p1 && p2>p3)
    {
        printf("2nd person is greater");
    }
    else
    {
        printf("3rd person is greater");
    }
}