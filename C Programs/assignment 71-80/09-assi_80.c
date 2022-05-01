#include<stdio.h>
void main()
{
    int temp1,temp2;
    system("cls");
    printf("Enter 1st temperature: ");
    scanf("%d",&temp1);
    printf("Enter 2nd temperature: ");
    scanf("%d",&temp2);
    if(temp1>temp2)
    {
        if(temp1>=100 && temp2<=0)
        printf("Entered temperature are correct");
        else
        printf("Entered values are wrong");
    }
    else
    {
        if(temp1<=0 && temp2>=100)
        printf("Entered temperature are correct");
        else
        printf("Entered values are wrong");
    }
}