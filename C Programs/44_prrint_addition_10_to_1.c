#include<stdio.h>
void main()
{
    int i=10,add=0;
    system("cls");
    while(i>=0)
    {
        add=add+i;
        printf("%d\n",i);
        i--;
    }
    printf("sum of all number = %d",add);
}