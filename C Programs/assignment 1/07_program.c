//write a program to convert specified days into years, weeks and days
#include<stdio.h>
void main()
{
    int tdays, year, week, day,t;
    printf("Enter days to convert ");
    scanf("%d",&tdays);
    year = tdays/365;
    t = tdays%365;
    week = t/7;
    t = t%7;
    day = t;
    printf("%d days means: %d years %d weeks and %d days",tdays,year,week,day);
    
}