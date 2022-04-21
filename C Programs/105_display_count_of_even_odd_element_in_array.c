#include<stdio.h>
void main()
{
    int num[10], i, even=0, odd=0;
    system("cls");
    printf("Enter any 10 numbers-\n");
    for(i=0; i<10; i++)
    {
        printf("num[%d]= ",i);
        scanf("%d",&num[i]);
    }
    for(i=0; i<10; i++)
    {
        if(num[i]%2==0)
        even=even+1;
        else
        odd=odd+1;
    }
    printf("There are %d even numbers and %d odd numbers",even,odd);
}