#include<stdio.h>
int i=1;
void main()
{
    system("cls");
    fun();
}
void fun()
{
    if(i==10)
    return;
    printf("%d ",i);
    i++;
    fun();
}