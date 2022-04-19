#include<stdio.h>
void main ()
{
    int num, backup, rev=0,n;
    system("cls");
    printf("Enter a number ");
    scanf("%d",&num);
    backup=num;
    for(;num>0;)
    {
        n=num%10;
        rev=rev*10+n;
        num=num/10;
    }while(num>0);
    printf("reverse of %d is %d ",backup,rev);
    
}
