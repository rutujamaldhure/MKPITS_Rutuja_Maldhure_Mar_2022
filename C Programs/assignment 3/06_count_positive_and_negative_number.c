#include<stdio.h>
#include<conio.h>
void main()
{
    int num1, num2, num3, num4, num5, psum=0, nsum=0;
    system ("cls");
    printf("Enter any 5 number");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    if(num1>0)
    {
        psum=psum+1;
    }
    else
    {
        nsum=nsum+1;
    }

    if(num2>0)
    {
        psum=psum+1;
    }
    else
    {
        nsum=nsum+1;
    }

    if(num3>0)
    {
        psum=psum+1;
    }
    else
    {
        nsum=nsum+1;
    }

    if(num4>0)
    {
        psum=psum+1;
    }
    else
    {
        nsum=nsum+1;
    }

    if(num5>0)
    {
        psum=psum+1;
    }
    else
    {
        nsum=nsum+1;
    }

    printf("positive number = %d \nnegative number = %d",psum,nsum);
}