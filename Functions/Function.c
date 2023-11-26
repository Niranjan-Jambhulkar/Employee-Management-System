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
    char emp_Email[20];
}Employee;
// Structures End

// Functions Declaration Start
void Accept (Employee [], Product []);
void Display (Employee [], Product []);
void Productivity (Employee [], Product []);
void Hard_data(Employee [], Product []);
void Total_Employee (Employee [], int);
void Employee_Details (Employee [], int);
void Productivity_Details (Employee [], Product [],int);
void Edit_Employee_Details (Employee[], Product [], int, int);
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
    strcpy(emp[0].emp_Email, "Raj@outlook.com");
    prd[0].Attendance = 100;
    prd[0].Productivity = 100;
    prd[0].Leaves = 15;

    emp[1].emp_ID = 2;
    strcpy(emp[1].emp_Name,"Rahul   ");
    emp[1].emp_salary = 50000;
    strcpy(emp[1].Department, "Sales Ext");
    strcpy(emp[1].Date_of_join, "15-08-2020");
    strcpy(emp[1].emp_Address, "Pune, Maharashtra, India");
    strcpy(emp[1].emp_Number, "762061043");
    strcpy(emp[1].emp_Email, "Rahul@outlook.com");
    prd[1].Attendance = 60;
    prd[1].Productivity = 60;
    prd[1].Leaves = 6;


    emp[2].emp_ID = 3;
    strcpy(emp[2].emp_Name,"Raju    ");
    emp[2].emp_salary = 40000;
    strcpy(emp[2].Department, "Sales Ext");
    strcpy(emp[2].Date_of_join, "25-04-2022");
    strcpy(emp[2].emp_Address, "Pune, Maharashtra, India");
    strcpy(emp[2].emp_Number, "915839194");
    strcpy(emp[2].emp_Email, "Raju@outlook.com");
    prd[2].Attendance = 80;
    prd[2].Productivity = 75;
    prd[2].Leaves = 5;
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
        scanf("%10s",&emp[i].Date_of_join);      //Using Filed width specifier to validate input data
        fflush(stdin);

        printf("Enter Address: ");
        gets(emp[i].emp_Address);
        fflush(stdin);

        printf("Enter Mobile Number: ");
        scanf("%10s", &emp[i].emp_Number);      //Using Filed width specifier to validate input data
        fflush(stdin);
        
        printf("Enter E-mail ID: ");
        gets(emp[i].emp_Email);

        prd[i].Leaves = 15;
        prd[i].Attendance = 100;
        prd[i].Productivity = 100;

        break;
    }
    size++;
    
}

void Display (Employee emp[], Product prd[]){ 
    printf("\n--------Employee List--------\n");
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
    for (int i = 0; i < 80; i++)
    {
        printf("-");
    }
    printf("\n");
}

void Productivity (Employee emp[], Product prd[]){
    printf("\n--------Employee Productivity--------\n");
    for (int i = 0; i < 80; i++)
    {
        printf("-");
    }
    
    printf("\nID\tName\t\tDepartment\t    Date of Join\t  Attendance\n");
    for (int i = 0; i < 80; i++)
    {
        printf("-");
    }
    printf("\n");
    for (int i = 0; i < size; i++)
    { 
        printf("%d       %s        %s            %s            %d per\n", emp[i].emp_ID, emp[i].emp_Name, emp[i].Department, emp[i].Date_of_join, prd[i].Attendance);
    }
    for (int i = 0; i < 80; i++)
    {
        printf("-");
    }
    printf("\n");
}

void Total_Employee (Employee emp[], int total_emp){
    
    for (int i = 0; i < size; i++)
    {
        total_emp++;
    }
}

void Employee_Details (Employee emp[], int a){
    printf("\n--------Employee Details--------\n");
    if (a<=size)
    {
        for (int i = a-1; i < size;)  // Using a-1 because 1st employee is stored on 0 index, and so on 
        {
            for (int i = 0; i < 80; i++)
            {
                printf("-");
            }
            printf("\nID: \t\t%d\nName: \t\t%s\nDepartment: \t%s\nDate of Join: \t%s\nSalary: \t%f\nAddress: \t%s\nMo. Number: \t+91 %s\nE-Mail ID: \t%s\n", emp[i].emp_ID, emp[i].emp_Name, emp[i].Department, emp[i].Date_of_join, emp[i].emp_salary, emp[i].emp_Address, emp[i].emp_Number, emp[i].emp_Email);
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

void Productivity_Details (Employee emp[], Product prd[],int a){
    if (a<=size)
    {
        for (int i = a-1; i < size;)  // Using a-1 because 1st employee is stored on 0 index, and so on 
        {
            for (int i = 0; i < 65; i++)
            {
                printf("-");
            }
            printf("\n| ID \t\t\tName \t\t\tDepartment\t|\n");
            printf("| %d\t\t\t%s\t\t%s\t|\n",emp[i].emp_ID, emp[i].emp_Name, emp[i].Department);
            printf("|");
            for (int i = 0; i < 63; i++)
            {
                printf("-");
            }
            printf("|\n");
            printf("| Attendance\t\tProductivity\t\tLeaves\t\t|\n");
            printf("| %d Percent\t\t%d / 100\t\t%d / 15\t\t|\n",prd[i].Attendance, prd[i].Productivity,prd[i].Leaves);
            for (int i = 0; i < 65; i++)
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

void Edit_Employee_Details (Employee emp[], Product prd[], int a, int option){
    int e = a-1;        // Using a-1 because 1st employee is stored on 0 index, and so on 
    switch (option)
    {
    case 1:
        fflush(stdin);
        printf("Enter Name for Employee %d: ", a);
        gets(emp[e].emp_Name);
        printf("Name changed Successfully!\n");
        break;
    
    case 2:
        printf("Enter Salary for Employee %d: ", a);
        scanf("%f", &emp[e].emp_salary);
        printf("Salary changed Successfully!\n");
        break;
    
    case 3:
        fflush(stdin);
        printf("Enter Department for Employee %d: ", a);
        gets(emp[e].Department);
        printf("Department changed Successfully!\n");
        break;
    
    case 4:
        fflush(stdin);
        printf("Enter Address for Employee %d: ", a);
        gets(emp[e].emp_Address);
        printf("Address changed Successfully!\n");
        break;
    
    case 5:
        fflush(stdin);
        printf("Enter Mobile Number for Employee %d: ", a);
        gets(emp[e].emp_Number);
        printf("Number changed Successfully!\n");
        break;

    case 6:
        fflush(stdin);
        printf("Enter Email for Employee %d: ", a);
        gets(emp[e].emp_Email);
        printf("Email changed Successfully!\n");
        break;

    case 7:
        printf("Enter Attendance for Employee %d: ", a);
        scanf("%3d", &prd[e].Attendance);
        printf("Attendance changed Successfully!\n");
        break;
    
    case 8:
        printf("Enter Productivity for Employee %d: ", a);
        scanf("%3d", &prd[e].Productivity);
        printf("Productivity changed Successfully!\n");
        break;
    
    case 9:
        printf("Enter Leaves for Employee %d: ", a);
        scanf("%2d", &prd[e].Leaves);
        printf("Leaves changed Successfully!\n");
        break;

    default:
        break;
    }

}
// Functions Defintion End