#include<stdio.h>
void main ()
{
    int num,i,m=0;
    system("cls");
    printf("Enter any number \n");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            m=m+1;
        }
    }
    
    if(m==2)
    {
        printf("%d is Prime Number",num);
    }
    else
    {
        printf("%d is Not Prime Number",num);
    }

}