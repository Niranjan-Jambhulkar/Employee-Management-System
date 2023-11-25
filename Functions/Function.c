#include<stdio.h>
#include<string.h>
static int size = 3;  // This is global/extern variable

// Structures Start
typedef struct Productivity
{
    int Attendance;
    int Productivity;
    int Leaves;
}Product;


typedef struct Employees
{
    int emp_ID;
    char emp_Name[20];
    float emp_salary;
    char Department[20];
    char Date_of_join[20];
    char emp_Address[50];
    char emp_Number[10];
}Employee;
// Structures End

// Functions Declaration Start
void Accept (Employee [], Product []);
void Display (Employee [], Product []);
void Productivity (Employee [], Product []);
void Hard_data(Employee [], Product []);
void Total_Employee (Employee [], int);
void Employee_Details (Employee [], int);
// Functions Declaration End

// Functions Defintion Start
void Hard_data(Employee emp[], Product prd[]){
    emp[0].emp_ID = 1;
    strcpy(emp[0].emp_Name,"Raj     ");
    emp[0].emp_salary = 60000;
    strcpy(emp[0].Department, "Operation");
    strcpy(emp[0].Date_of_join, "02-05-2020");
    strcpy(emp[0].emp_Address, "Pune, Maharashtra, India");
    strcpy(emp[0].emp_Number, "775609265");
    prd[0].Attendance = 90;

    emp[1].emp_ID = 2;
    strcpy(emp[1].emp_Name,"Rahul   ");
    emp[1].emp_salary = 50000;
    strcpy(emp[1].Department, "Sales Ext");
    strcpy(emp[1].Date_of_join, "15-08-2020");
    strcpy(emp[1].emp_Address, "Pune, Maharashtra, India");
    strcpy(emp[1].emp_Number, "762061043");
    prd[1].Attendance = 60;


    emp[2].emp_ID = 3;
    strcpy(emp[2].emp_Name,"Raju    ");
    emp[2].emp_salary = 40000;
    strcpy(emp[2].Department, "Sales Ext");
    strcpy(emp[2].Date_of_join, "25-04-2022");
    strcpy(emp[2].emp_Address, "Pune, Maharashtra, Pune");
    strcpy(emp[2].emp_Number, "915839194");
    prd[2].Attendance = 80;
}

void Accept (Employee emp[], Product prd[]){
    printf("\n--------Enter Employee Details--------\n");
    for (int i = size; i <= size; i++)
    {
        printf("\nEnter Employee ID: ");
        scanf("%d", &emp[i].emp_ID);
        fflush(stdin);                          // Using fflush to remove buffer

        printf("Enter Employee name: ");
        gets(emp[i].emp_Name);                  // Using gets to accept string from user

        printf("Enter Employee Salary: ");
        scanf("%f", &emp[i].emp_salary);
        fflush(stdin);

        printf("Enter Department name: ");
        gets(emp[i].Department);

        printf("Enter Date of join: ");
        scanf("%10s",emp[i].Date_of_join);      //Using Filed width specifier to validate input data
        fflush(stdin);

        printf("Enter Address: ");
        gets(emp[i].emp_Address);
        fflush(stdin);

        printf("Enter Mobile Number: ");
        scanf("%10s", &emp[i].emp_Number);      //Using Filed width specifier to validate input data

        // printf("Enter Attendance: ");
        // scanf("%d", &prd[i].Attendance);
        break;
    }
    size++;
    
}

void Display (Employee emp[], Product prd[]){ 
    for (int i = 0; i < 80; i++)
    {
        printf("-");
    }
    printf("\nID\tName\t\tDepartment\t\tSalary\t\tDate of Join\n");
    for (int i = 0; i < 80; i++)
    {
        printf("-");
    }
    printf("\n");
    for (int i = 0; i < size; i++)
    { 
        printf("%d       %s        %s            %f        %s\n", emp[i].emp_ID, emp[i].emp_Name, emp[i].Department,emp[i].emp_salary, emp[i].Date_of_join);
    }
    
}

void Productivity (Employee emp[], Product prd[]){
    printf("\nID\tName\t\tDepartment\t\tDate of Join\tAttendance\n");
    for (int i = 0; i < 80; i++)
    {
        printf("-");
    }
    printf("\n");
    for (int i = 0; i < size; i++)
    { 
        printf("%d       %s        %s            %s            %d per\n", emp[i].emp_ID, emp[i].emp_Name, emp[i].Department, emp[i].Date_of_join, prd[i].Attendance);
    }
    
}

void Total_Employee (Employee emp[], int total_emp){
    
    for (int i = 0; i < size; i++)
    {
        total_emp++;
    }
}

void Employee_Details (Employee emp[], int a){
    if (a<=size)
    {
        for (int i = a-1; i < size;)  // Using a-1 because 1st employee is stored on 0 index, and so on 
        {
            for (int i = 0; i < 80; i++)
            {
                printf("-");
            }
            printf("\nID: \t\t%d\nName: \t\t%s\nDepartment: \t%s\nDate of Join: \t%s\nAddress: \t%s\nMo. Number: \t%s\n", emp[i].emp_ID, emp[i].emp_Name, emp[i].Department, emp[i].Date_of_join, emp[i].emp_Address, emp[i].emp_Number);
            for (int i = 0; i < 80; i++)
            {
                printf("-");
            }
                printf("\n");
            break;
        }
    }
    else{
        for (int i = 0; i < 80; i++)
            {
                printf("-");
            }
        printf("\nNo Employee Found\n");
        for (int i = 0; i < 80; i++)
            {
                printf("-");
            }
                printf("\n");
    }
}
// Functions Defintion End