#include<stdio.h>
#include<string.h>
#include "E:\C Project\Employee Management System\Functions\Function.c"  // Linkage
int main()
{
    // declaring variables
    int total_emp=0; 
    int option, a; 
    static int hard_emp = 0, Log_value = 0;

    // declaring structure employee variable name
    // declaring in static because it should remain constant without changing or deleting its given value throughout the program
    static Employee emp[100];
    Employee *ptre;
    static Product prd[100];
    Product *ptrp;

    static Login log[20];
    Login *ptrl;

    ptre = emp;  // emp is array so don't use "&" operator 
    ptrp = prd;
    ptrl = log;

    // Run Hard data function before menu because we need to assign data for 0,1,2 index.
    // We will run this operation only for one time because once the value are assign it should stop for entire program life
    for (; hard_emp < 1; hard_emp++)
    {
        Hard_data(ptre,ptrp, ptrl);
    }
    Total_Employee (ptre, total_emp);

    // Start
    // This will run only one time, that is at the start of the program.
    for (; Log_value < 1;)
    {
        Login_Page(ptrl,&Log_value);
    }
    
    // Main Menu start
    int Menu;
     for (int i = 0; i < 80; i++)
        {
            printf("-");
        }
    printf("\n\tEmployee Management System\n");
    for (int i = 0; i < 80; i++)
        {
            printf("-");
        }
    // printf("\n--------Employee Management System--------\n");
    printf("\n\n");
    printf("1. Add Employee\n2. View Employee\n3. View Productivity\n4. Edit Details\n5. Logout\n");
    printf("\nSelect one option: ");
    scanf("%d", &Menu);  
    switch (Menu)
    {
    fflush(stdin);
    case 1:
        Accept(ptre,ptrp);
        printf("\n");
        for (int i = 0; i < 5; i++)
        {
            printf("-");
        }
        printf("Menu");
        for (int i = 0; i < 5; i++)
        {
            printf("-");
        }
        printf("\n");
        printf("\n1. Add Employee\n2. Menu\n");
        printf("Enter: ");
        fflush(stdin);
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
        printf("\nEnter Employee ID to view more details of Employee\nPress 0 to Main Menu\n");
        printf("Enter: ");
        scanf("%d", &a);
        for (; a != 0;)
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
        }
        main();
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
        printf("\nEnter Employee ID to view more details of Employee Productivity\nPress 0 to Main Menu\n");
        printf("Enter: ");
        scanf("%d", &a);
        for (; a != 0;)
        {
                Productivity_Details(emp, prd, a);
                printf("\n");
                printf("Press 1 to back: ");
                scanf("%d", &a);
                if (a == 1)
                {
                    Productivity(ptre,ptrp);
                    printf("\n");
                    printf("\nEnter Employee ID to view more details of Employee Productivity\nPress 0 to Main Menu\n");
                    printf("Enter: ");
                    scanf("%d", &a);
                }
        }
        main();
        break;

    case 4:
        
        Display(ptre,prd);
        printf("\nSelect Employee to edit details:\nPress 0 to main menu\n");
        printf("Enter: ");
        scanf("%d", &a);
        for (; a !=0; )
        {
            for (int i = 0; i < 80; i++)
            {
                printf("-");
            }
            printf("\n\t\t\tEdit Employee Details\n");
            for (int i = 0; i < 80; i++)
            {
                printf("-");
            }
            printf("\n");
            printf("Select what you want to edit: \n\n");
            printf("1. Change Name\t\t5. Change Number\n");
            printf("2. Change Salary\t6. Change Email\n");
            printf("3. Change Department\t7. Change Attendance\n");
            printf("4. Change Address\t8. Change Productivity\n");
            printf("9. Change Leaves\t10. Back\n");
            for (int i = 0; i < 80; i++)
            {
                printf("-");
            }
            printf("\n");
            printf("Enter: ");
            scanf("%d", &option);
            if (option == 10)
            {
                Display(ptre,prd);
                printf("\nSelect Employee to edit details:\nPress 0 to main menu\n");
                printf("Enter: ");
                scanf("%d", &a);
            }
            else{
            Edit_Employee_Details(ptre,ptrp,a,option);
            }
        }
        main();
        
    case 5:
        Log_value = 0;
        main();
        
    default:
        break;
    }
    
    return 0;
}
