#include<stdio.h>
#include<string.h>
#include "E:\C Project\Employee Management System\Functions\Function.c"
int main()
{
    // declaring structure employee variable name
    // declaring in static because it should remain constant without changing or deleting its given value throughout the program
    static Employee emp[100];
    Employee *ptr;

    ptr = emp;  // emp is array so don't use "&" operator 

    // We run Hard data function before menu because we need to assign data for 0,1,2 index first.
    Hard_data(ptr);

    // Main Menu start
    int Menu;
    printf("\n\t-------Employee Management System-------\n");
    printf("1. Add Employee\n2. View Employee\n3. View Attendance\n");
    printf("Select one option: ");
    scanf("%d", &Menu);  
    switch (Menu)
    {
    fflush(stdin);
    case 1:
        Accept(ptr);
        int a=0;
        printf("\n1. Add number\n2. Menu\n");
        printf("Enter: ");
        scanf("%d", &a);
        for (; a != 2;)
        {
            Accept(ptr);
            printf("1. Add number\n2. Menu\n");
            printf("Enter: ");
            scanf("%d", &a);
        }
        main();
        break;
    
    case 2:
        Display(emp);
        printf("\nPress any integer for Main menu\n");
        printf("Enter: ");
        scanf("%d", &a);
        for (; a != -1;)
        {
            main();
        }
        break;

    case 3:
        printf("Attendance of Employees");
        Attendance(ptr);

    default:
        break;
    }
    
    return 0;
}
