#include<stdio.h>
#include<string.h>
#include "E:\C Project\Employee Management System\Functions\Function.c"
int main()
{
    static Employee emp[100];
    Employee *ptr;
    ptr = emp;  // emp is array so don't use "&" operator 
    int Menu;
    printf("\t-------Employee Management System-------\n");
    printf("1. To Add Employee\n");
    printf("2. To View Employee\n");
    printf("Select one option: ");
    scanf("%d", &Menu);  
    switch (Menu)
    {
    fflush(stdin);
    case 1:
        accept(ptr);
        int a=0;
        printf("1. Add number\n2. Menu\n");
        printf("Enter: ");
        scanf("%d", &a);
        for (; a != 2;)
        {
            accept(ptr);
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

    default:
        break;
    }
    
    return 0;
}
