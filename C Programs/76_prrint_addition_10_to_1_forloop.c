#include<stdio.h>
void main()
{
    int i,add=0;
    system("cls");
    for(i=10;i>=0;i--)
    {
        add=add+i;
        printf("%d\n",i);
    }
    printf("sum of all number = %d",add);
}