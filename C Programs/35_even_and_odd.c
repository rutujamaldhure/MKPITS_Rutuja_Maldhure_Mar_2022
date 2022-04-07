#include<stdio.h>
void main ()
{
    int num, r;
    printf("Enter number ");
    scanf("%d", &num);
    r=num%2;
    if(r==0)
    {
        printf("%d is even number",num);
    }
    else
    {
        printf("%d is odd number ",num);
    }
}