#include<stdio.h>
#include<string.h>
typedef struct Employees
{
    int emp_ID;
    char emp_Name[20];
    float emp_salary;
}Employee;

void accept (Employee []);
void Display (Employee []);

int main(int argc, char const *argv[])
{
    Employee emp[5];
    Employee *ptr;
    ptr = &emp;
    emp[0].emp_ID = 1;
    strcpy(emp[0].emp_Name,"Raj");
    emp[0].emp_salary = 50000;

    emp[1].emp_ID = 2;
    strcpy(emp[1].emp_Name,"Rahul");
    emp[1].emp_salary = 60000;

    emp[2].emp_ID = 3;
    strcpy(emp[2].emp_Name,"Raju");
    emp[2].emp_salary = 65000;
    accept(ptr);
    Display(ptr);
    return 0;
}

void accept (Employee emp[]){
    for (int i = 3; i < 5; i++)
    {
        printf("Enter Employee ID: ");
        scanf("%d", &emp[i].emp_ID);
        printf("Enter Employee name: ");
        scanf("%s", emp[i].emp_Name);
        printf("Enter Employee Salary: ");
        scanf("%f", &emp[i].emp_salary);

    }
    
}

void Display (Employee emp[]){ 
    
    printf("ID\tName\t\tSalary\n");
    for (int i = 0; i < 5; i++)
    { 
        printf("%d\t%s\t\t%f\n", emp[i].emp_ID, emp[i].emp_Name,emp[i].emp_salary);
    }
    
}