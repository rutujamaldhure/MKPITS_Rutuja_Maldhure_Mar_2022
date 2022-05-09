#include<stdio.h>
struct student
{
    int id;
    char Name[20];
}s1;
void main ()
{
    struct student s1= {1,"Rutuja"};
    system("cls");
    /*printf("Enter student id: ");
    scanf("%d",&s1.id);
    printf("Enter student Name: ");
    scanf("%s",&s1.Name);*/
    printf("student id= %d",s1.id);
    printf("\nstudent name= %s",s1.Name);
}