#include<stdio.h>
#include<string.h>
#include "E:\C Project\Employee Management System\Functions\Function.c"
int main()
{
    static Employee emp[5];
    Employee *ptr;
    ptr = &emp;
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
        printf("1. Add number\n2. Menu");
        printf("Enter: ");
        scanf("%d", &a);
        if (a == 1)
        {
            accept(ptr);
        }
        else if (a ==2)
        {
           main();
        }
        
        break;
    
    case 2:
        Display(emp);
        break;

    default:
        break;
    }
    
    return 0;
}
