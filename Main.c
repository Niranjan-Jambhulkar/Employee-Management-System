#include<stdio.h>
#include<string.h>
#include "E:\C Project\Employee Management System\Functions\Function.c"
int main(int argc, char const *argv[])
{
    Employee emp[20];
    int Menu;
    printf("\t-------Employee Management System-------\n");
    printf("1. To Add Employee\n");
    printf("2. To View Employee\n");
    printf("Select one option: ");
    scanf("%d", &Menu);
    switch (Menu)
    {
    case 1:
        printf("Hi");
        break;
    case 2:
        Display_Employee();
        break;
    default:
        break;
    }
    return 0;
}

