#include<stdio.h>
#include<string.h>
#include "E:\C Project\Employee Management System\Functions\Function.c"
int main()
{
    // declaring structure employee variable name
    // declaring in static because it should remain constant without changing or deleting its given value throughout the program
    static Employee emp[100];
    Employee *ptr;
    static Product prd[100];
    Product *ptr1;

    ptr = emp;  // emp is array so don't use "&" operator 
    ptr1 = prd;

    // We run Hard data function before menu because we need to assign data for 0,1,2 index first.
    Hard_data(ptr,ptr1);

    // Main Menu start
    int Menu;
    printf("\n--------Employee Management System--------\n");
    printf("1. Add Employee\n2. View Employee\n3. View Attendance\n");
    printf("Select one option: ");
    scanf("%d", &Menu);  
    switch (Menu)
    {
    fflush(stdin);
    case 1:
        Accept(ptr,ptr1);
        int a=0;
        printf("\n----Menu----");
        printf("\n1. Add Employee\n2. Menu\n");
        printf("Enter: ");
        scanf("%d", &a);
        for (; a != 2;)
        {
            Accept(ptr,ptr1);
            printf("\n----Menu----");
            printf("1. Add Employee\n2. Menu\n");
            printf("Enter: ");
            scanf("%d", &a);
        }
        main();
        break;
    
    case 2:
        Display(emp,ptr1);
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
        Attendance(ptr,ptr1);

    default:
        break;
    }
    
    return 0;
}
