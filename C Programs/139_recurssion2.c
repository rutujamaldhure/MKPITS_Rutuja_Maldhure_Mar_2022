#include<stdio.h>

void main()
{
    system("cls");
    fun();
}
void fun()
{
    static int i=1;
    if(i==10)
    return;
    printf("%d ",i);
    i++;
    fun();
}