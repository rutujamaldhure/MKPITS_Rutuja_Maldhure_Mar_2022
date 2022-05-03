#include<stdio.h>
void armstrong()
{
    int num, backup, arm=0, n, power=0,backup_power,power_value=1;
    system("cls");
    printf("Enter a number ");
    scanf("%d",&num);
    backup=num;
    while(num>0)
    {
        num=num/10;
        power=power+1;
    }
    backup_power=power;
    num=backup;
    for(;num>0;)
    {
        n=num%10;
        for(;power>0;power--)
        {
            power_value=power_value*n;
        }
        power=backup_power;
        arm = arm + power_value;
        power_value=1;
        num = num/10;
        
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

void main()
{
    system("cls");
    armstrong();
}
