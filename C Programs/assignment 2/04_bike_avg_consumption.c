//write a program to calculate a bike's average consumption from the given total distance
//(integer value)traveled in km and spent fuel (in liters,float number-2 decimal point).
#include<stdio.h>
#include<conio.h>
void main ()
{
    int dist;
    float fuel, avg;
    printf("Enter total distance travelled in km ");
    scanf("%d",&dist);
    printf("Enter fuel spent in liter ");
    scanf("%f",&fuel);
    avg = dist/fuel;
    printf("Bike's avg consumption is %.2f km/lit ",avg);
}