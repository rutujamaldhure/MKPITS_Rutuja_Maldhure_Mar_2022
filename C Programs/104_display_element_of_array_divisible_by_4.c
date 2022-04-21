#include<stdio.h>
void main()
{
    int i,num[5],n=0;
    system("cls");
    printf("Enter any 5 numbers-\n");
    for(i=0; i<5; i++)
    {
        printf("num[%d]= ",i);
        scanf("%d", &num[i]);
    }
    printf("Numbers divisible by 4 are- ");
    for(i=0; i<5; i++)
    {
        if(num[i]%4==0)
        {
        printf("%d ",num[i]);
        n=n+1;
        }
    }
    if(n==0)
    printf("No number found ");
}