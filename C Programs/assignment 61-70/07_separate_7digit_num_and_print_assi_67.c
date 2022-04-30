#include<stdio.h>
void main()
{
    int num,n1,n2,n3,n4,n5,n6,n7;
    system("cls");
    printf("Enter 7 digit num: ");
    scanf("%d",&num);
    if(num>999999 && num<=9999999)
    {
        n7=num%10;
        num=num/10;
        n6=num%10;
        num=num/10;
        n5=num%10;
        num=num/10;
        n4=num%10;
        num=num/10;
        n3=num%10;
        num=num/10;
        n2=num%10;
        num=num/10;
        n1=num;

        printf("%d  %d  %d  %d  %d  %d  %d ",n1,n2,n3,n4,n5,n6,n7);
    }
    else
    printf("Invalid input");
}
