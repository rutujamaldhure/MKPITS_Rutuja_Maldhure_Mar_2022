#include<stdio.h>
void main ()
{
    int num, even_sum=0, odd_sum=0, n1, n2, n3, n4, n5;
    printf("Enter 5 digit number ");
    scanf("%d",&num);
    n1=num%10;
    num=num/10;

    n2=num%10;
    num=num/10;

    n3=num%10;
    num=num/10;

    n4=num%10;
    num=num/10;

    n5=num%10;

    if (n1%2==0)
    {
        even_sum= even_sum + n1;
    }
    else
    {
        odd_sum=odd_sum + n1;
    }
   
    if (n2%2==0)
    {
        even_sum= even_sum + n2;
    }
    else
    {
        odd_sum= odd_sum+n2;
    }
    
    if (n3%2==0)
    {
        even_sum=even_sum+n3;
    }
    else
    {
        odd_sum=odd_sum+n3;
    }
    
    if (n4%2==0)
    {
        even_sum=even_sum+n4;
    }
    else
    {
        odd_sum=odd_sum+n4;
    }
    
    if (n5%2==0)
    {
        even_sum=even_sum+n5;
    }
    else
    {
        odd_sum= odd_sum+n5;
    }
    printf("sum of even number is %d and sum of odd number is %d",even_sum,odd_sum);
}