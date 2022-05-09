#include<stdio.h>

void main()
{
    system("cls");
    fun(1);
}
void fun(int i)
{
    if(i==10)
    return;
    printf("%d ",i);
    fun(i+1);
    //printf("%d \n",i); //recurssion distroy itself by stack concept
}