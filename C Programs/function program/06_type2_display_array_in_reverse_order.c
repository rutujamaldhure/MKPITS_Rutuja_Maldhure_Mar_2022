#include<stdio.h>
void revarr(int a[])
{
    int i;
    printf("Reverse order of entered number- ");
    for(i=4; i>=0; i--)
    {
        printf("%d ",a[i]);
    }
}
void main()
{
    int num[5], i;
    system("cls");
    printf("Enter any 5 numbers\n");
    for(i=0; i<5; i++)
    {
        printf("num[%d]= ",i);
        scanf("%d", &num[i]);
    }
    revarr(num);
}