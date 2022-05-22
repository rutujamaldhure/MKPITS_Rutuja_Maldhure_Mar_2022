#include<stdio.h>
void main()
{
    float temp,K,F;
    system("cls");
    printf("Enter temperature in degree celcious: ");
    scanf("%f",&temp);
    K=273.15+temp;
    printf("Temperature in kelvin: %.2fK",K);
    F=(temp * 1.8)+32;
    printf("\nTemperature in Fahrenheit: %.2fF",F);
        
}