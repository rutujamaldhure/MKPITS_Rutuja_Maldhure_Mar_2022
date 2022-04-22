#include<stdio.h>
void main()
{
    double len_cm, len_inch;
    system("cls");
    printf("Enter length in centimeters= ");
    scanf("%lf",&len_cm);
    len_inch=len_cm*0.3937;
    printf("length in Inches = %lf",len_inch);
}