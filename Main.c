#include<stdio.h>
#include<string.h>
#include "E:\C Project\Employee Management System\Functions\Function.c"  // Linkage
int main()
{
    int total_emp=0;

    // declaring structure employee variable name
    // declaring in static because it should remain constant without changing or deleting its given value throughout the program
    static Employee emp[100];
    Employee *ptre;
    static Product prd[100];
    Product *ptrp;

    ptre = emp;  // emp is array so don't use "&" operator 
    ptrp = prd;

    // We run Hard data function before menu because we need to assign data for 0,1,2 index first.
    Hard_data(ptre,ptrp);
    Total_Employee (ptre, total_emp);

    // Main Menu start
    int Menu;
    printf("\n");
     for (int i = 0; i < 10; i++)
        {
            printf("-");
        }
        printf("Employee Management System");
        for (int i = 0; i < 10; i++)
        {
            printf("-");
        }
    // printf("\n--------Employee Management System--------\n");
    printf("\n\n");
    printf("1. Add Employee\n2. View Employee\n3. View Productivity\n");
    printf("Select one option: ");
    scanf("%d", &Menu);  
    switch (Menu)
    {
    fflush(stdin);
    case 1:
        Accept(ptre,ptrp);
        int a=0;
        for (int i = 0; i < 5; i++)
        {
            printf("-");
        }
        printf("Menu");
        for (int i = 0; i < 5; i++)
        {
            printf("-");
        }
        printf("\n\n");
        printf("\n1. Add Employee\n2. Menu\n");
        printf("Enter: ");
        scanf("%d", &a);
        for (; a != 2;)
        {
            Accept(ptre,ptrp);
            for (int i = 0; i < 5; i++)
            {
                printf("-");
            }
            printf("Menu");
            for (int i = 0; i < 5; i++)
            {
                printf("-");
            }
            printf("\n\n");
            printf("1. Add Employee\n2. Menu\n");
            printf("Enter: ");
            scanf("%d", &a);
        }
        main();
        break;
    
    case 2:
        Display(ptre,ptrp);
        printf("\nEnter Employee ID to view more details of Employee\nPress 00 to Main Menu\n");
        printf("Enter: ");
        scanf("%d", &a);
        for (; a != 0;)
        {
            if (a == a)
            {
                Employee_Details(emp, a);
                printf("\n");
                printf("Press 1 to back: ");
                scanf("%d", &a);
                if (a == 1)
                {
                    Display(ptre,ptrp);
                    printf("\n");
                    printf("\nEnter Employee ID to view more details of Employee\nPress 0 to Main Menu\n");
                    printf("Enter: ");
                    scanf("%d", &a);
                }
                else if (a == 0)
                {
                    main();
                }
            }
            
        }
        if (a = 0){
            main();
        }
        break;

    case 3:
        for (int i = 0; i < 5; i++)
            {
                printf("-");
            }
            printf("Employees Productivity");
            for (int i = 0; i < 5; i++)
            {
                printf("-");
            }
            printf("\n\n");
        Productivity(ptre,ptrp);

    default:
        break;
    }
    
    return 0;
}
