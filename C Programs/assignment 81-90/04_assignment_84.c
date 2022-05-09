#include<stdio.h>
int nearto100()
{
    int num1,num2, r1, r2;
    printf("Enter 1st number: ");
    scanf("%d", &num1);
    printf("Enter 2nd number: ");
    scanf("%d", &num2);

    if (num1>100)
    r1=num1-100;
    else
    r1=100-num1;

    if(num2>100)
    r2=num2-100;
    else
    r2=100-num2;

    if(r1<r2)
    return num1;
    else
    if(r2<r1)
    return num2;
    else
    return 0;
}

void main ()
{
    int res;
    system("cls");
    res=nearto100();
    if(res==0)
    printf("both numbers are equal");
    else
    printf("%d is nearest to 100",res);
}