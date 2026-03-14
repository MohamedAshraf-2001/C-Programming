/******************************************************************************

                                                        Structure in C 
    Structure is a user defined data type which hold or store heterogeneous data
    item or element in a single variable. It is a Combination of primitive and derived 
    data type. 
    
    Structure is a data Structure used to create user-defined data types in C. Structure
    allows us to combine data of different types.
    
    Array is also a user-defined data type but array hold or store only similar type of data.
    
    Structure Name can be used as a new data type. 
    

*******************************************************************************/

#include "stdio.h"
#include "string.h"
#include "conio.h"

struct SEmployee
{
    char m_Name[50];
    int m_BirthDateDay;
    int m_BirthDateMonth;
    int m_BirthDateYear; 
    int m_Salary; 
};

int main()
{
    // struct SEmployee Employee_1; 
    
    // strcpy(Employee_1.m_Name, "Mohamed Ragab");
    // Employee_1.m_BirthDateDay = 27;
    // Employee_1.m_BirthDateMonth = 5;
    // Employee_1.m_BirthDateYear = 2001; 
    // Employee_1.m_Salary = 500000; 
    
    struct SEmployee Employees[5];
    
    Employees[0] = (struct SEmployee){"Mohamed Ragab",   27, 5, 2001, 500000};
    Employees[1] = (struct SEmployee){"Abdallah Bondok", 9,  9, 2001, 400000};
    Employees[2] = (struct SEmployee){"Ahmed Mohamed",   10, 5, 2001, 300000};
    
    printf("Employee #1:\n");
    
    printf("Name: %s\nBirthday Date: %d/%d/%d\nSalary: %d",
    Employees[0].m_Name,
    Employees[0].m_BirthDateDay,
    Employees[0].m_BirthDateMonth,
    Employees[0].m_BirthDateYear, 
    Employees[0].m_Salary);
    
    printf("\nEmployee #2:\n");
    
    printf("Name: %s\nBirthday Date: %d/%d/%d\nSalary: %d",
    Employees[1].m_Name,
    Employees[1].m_BirthDateDay,
    Employees[1].m_BirthDateMonth,
    Employees[1].m_BirthDateYear, 
    Employees[1].m_Salary);
    
    printf("\nEmployee #3:\n");

    
    printf("Name: %s\nBirthday Date: %d/%d/%d\nSalary: %d",
    Employees[2].m_Name,
    Employees[2].m_BirthDateDay,
    Employees[2].m_BirthDateMonth,
    Employees[2].m_BirthDateYear, 
    Employees[2].m_Salary);
    
    return 0;
}