//write a program that accepts an employee's ID, 
//total worked hours of a month and the amount he received per hour. 
//Print the employee's ID and salary (with two decimal places) of a particular month.

#include<stdio.h>
#include<conio.h>
void main ()
{
int id;
float work_hr, amount_per_hr, salary;
printf("Enter 6 digit Employee ID ");
scanf("%d",&id);
printf("Enter total worked hours ");
scanf("%f",&work_hr);
printf("Enter amount per hour ");
scanf("%f",&amount_per_hr);
salary=work_hr*amount_per_hr;
printf("Employe ID : %d \nSalary :Rs.%.2f/-",id,salary);

} 