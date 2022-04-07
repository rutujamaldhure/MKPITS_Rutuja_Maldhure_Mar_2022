#include<stdio.h>
#include<conio.h>
void main ()
{
    int tdays, year, month, days,backup;
    system("cls");
    printf("Enter  days to convert ");
    scanf("%d", &tdays);
    backup=tdays;
    year=tdays/365;
    tdays=tdays%365;
    month=tdays/30;
    tdays=tdays%30;
    days=tdays;
    printf("%d days means %d years %d months and %d days",backup,year, month,days);
}