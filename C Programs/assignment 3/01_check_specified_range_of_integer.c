#include<stdio.h>
#include<conio.h>
void main ()
{
    int num;
    system("cls");
    printf("Enter a Number ");
    scanf("%d", &num);
    if(num>=0 && num<=10)
    {
        printf("Entered number is in the range of 0 to 10");
    }
    else
    if(num>10 && num<=20)
    {
        printf("Entered number is in the range of 11 to 20");
    }
    else
    if(num>20 && num<=30)
    {
        printf("Entered number is in the range of 21 to 30");
    }
    else
    if(num>30 && num<=40)
    {
        printf("Entered number is in the range of 31 to 40");
    }
    else
    if(num>40 && num<=50)
    {
        printf("Entered number is in the range of 41 to 50");
    }
    else
    if(num>50 && num<=60)
    {
        printf("Entered number is in the range of 51 to 60");
    }
    else
    if(num>60 && num<=70)
    {
        printf("Entered number is in the range of 61 to 70");
    }
    else
    if(num>70 && num<=80)
    {
        printf("Entered number is in the range of 71 to 80");
    }
    else
    {
        printf("ERROR: INVALID INPUT");
    }
}