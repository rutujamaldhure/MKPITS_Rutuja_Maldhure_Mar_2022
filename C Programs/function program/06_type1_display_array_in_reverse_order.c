#include<stdio.h>
void revarr()
{
    int i,num[5];
    printf("Enter any 5 numbers\n");
    for(i=0; i<5; i++)
    {
        printf("num[%d]= ",i);
        scanf("%d", &num[i]);
    }
    printf("Reverse order of entered number- ");
    for(i=4; i>=0; i--)
    {
        printf("%d ",num[i]);
    }
}
void main()
{
    system("cls");
    revarr();
}