#include<stdio.h>
// Structure
typedef struct Employees
{
    int Emp_ID;
    char Emp_Name[20];
    float Emp_Salary;
}Employee;


// Function
void Accept_Employee(Employee []);
void Accept_Employee(Employee emp []){
    for (int i = 0; i < 20; i++)
    {
        /* code */
    }
    
}

void Display_Employee();
void Display_Employee(){
    Employee emp[20];
    // First three Employees are hardcoded
    emp[0].Emp_ID = 1;
    strcpy(emp[0].Emp_Name,"Raj");
    emp[0].Emp_Salary = 50000;

    emp[1].Emp_ID = 2;
    strcpy(emp[1].Emp_Name,"Rahul");
    emp[1].Emp_Salary = 60000;

    emp[2].Emp_ID = 3;
    strcpy(emp[2].Emp_Name,"Raju");
    emp[2].Emp_Salary = 65000;

    // Printing Employees
    printf("ID\tName\t\tSalary\n");
    for (int i = 0; i < 3; i++)
    { 
        printf("%d\t%s\t\t%f\n",emp[i].Emp_ID, emp[i].Emp_Name, emp[i].Emp_Salary);
    }
    
}