#include<stdio.h>
void main()
{
    int i=10,add=0;
    system("cls");
    do
    {
        add=add+i;
        printf("%d\n",i);
        i--;
    } while(i>=0);
    printf("sum of all number = %d",add);
}