#include<stdio.h>
void armstrong(int value)
{
    int backup, arm=0, n, power=0,backup_power,power_value=1;
    system("cls");
    backup=value;
    while(value>0)
    {
        value=value/10;
        power=power+1;
    }
    backup_power=power;
    value=backup;
    for(;value>0;)
    {
        n=value%10;
        for(;power>0;power--)
        {
            power_value=power_value*n;
        }
        power=backup_power;
        arm = arm + power_value;
        power_value=1;
        value = value/10;
        
    }
    if(arm==backup)
    {
        printf("%d is a Armstrong Number",backup);
    }
    else
    {
        printf("%d is NOT Armstrong Number",backup);
    }
}
void fun()
{
    int num;
    printf("Enter a number ");
    scanf("%d",&num);
    armstrong(num);
}

void main()
{
    system("cls");
    fun();
}
