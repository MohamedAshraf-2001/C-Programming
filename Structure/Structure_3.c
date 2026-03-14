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
    
    int count = 0;
    int indx; 
    struct SEmployee Employees[3];
    
    Employees[0] = (struct SEmployee){"Mohamed Ragab",   27, 5, 2001, 500000};
    Employees[1] = (struct SEmployee){"Abdallah Bondok", 9,  9, 2001, 400000};
    Employees[2] = (struct SEmployee){"Ahmed Mohamed",   10, 5, 2001, 300000};
    
    indx = sizeof(Employees) / sizeof(Employees[0]);
    for(count = 0; count < indx; count++){
        printf("Employee #%d:\n", count+1);
        printf("Name: %s\nBirthday Date: %d/%d/%d\nSalary: %d",
        Employees[count].m_Name,
        Employees[count].m_BirthDateDay,
        Employees[count].m_BirthDateMonth,
        Employees[count].m_BirthDateYear, 
        Employees[count].m_Salary);
        printf("\n\n");
    }
    return 0;
}