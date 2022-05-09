#include<stdio.h>
int fun(int x, int y)
{
    int r;
    r=x+y;
    return r;
}
void main()
{
    int a=5,b=10,res;
    system("cls");
    res=fun(a,b);
    printf("%d",res);
}