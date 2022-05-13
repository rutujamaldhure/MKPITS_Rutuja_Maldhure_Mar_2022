#include<stdio.h>

int fact (int);  
void main()  
{  
    int n,f;  
    printf("Enter the number : ");  
    scanf("%d",&n);  
    f = fact(n);  
    printf("factorial = %d",f);  
}  
int fact(int a)  
{  
    if (a==0)  
    {  
        return 0;  
    }  
    else if ( a == 1)  
    {  
        return 1;  
    }  
    else   
    {  
        return a*fact(a-1);  
    }  
}