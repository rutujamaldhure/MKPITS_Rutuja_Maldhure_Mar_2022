#include<stdio.h>
void main()
{
    int num,i,m;
    system("cls");
    printf("Enter number: ");
    scanf("%d",&num);
    printf("Multiplication table of %d\n",num);
    for(i=1; i<=10; i++)
    {
        m=num*i;
        printf("%d x %d = %d\n",num,i,m);
    }
}