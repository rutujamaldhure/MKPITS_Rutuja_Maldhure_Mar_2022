#include<stdio.h>
void main()
{
    int num,i,j;
    system("cls");
    printf("Enter a number: ");
    scanf("%d",&num);
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=3; j++)
        {
            if(i==1 || j==1 || j==3 || i==5)
            printf("%d ",num);
            else
            printf("  ");
        }
        printf("\n");
    }
}