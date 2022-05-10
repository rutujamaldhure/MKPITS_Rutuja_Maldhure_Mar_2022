#include<stdio.h>
int larg_value()
{
    int num1,num2;

    printf("Enter 1st number");
    printf("(value should be in range 20-30): ");
    scanf("%d",&num1);
    printf("Enter 2nd number");
    printf("(value should be in range 20-30): ");
    scanf("%d",&num2);
    if(num1>=20 && num1<=30 && num2>=20 && num2<=30)
    {
        if(num1>num2)
        return num1;
        if(num2>num1)
        return num2;
    }
    else
    return 0;
    
}

void main()
{
    int res;
    system("cls");  
    res=larg_value();
    if(res==0)
    {
        printf("%d",res);
    }
    else
    {
        printf("%d is larger value",res);
    }
}