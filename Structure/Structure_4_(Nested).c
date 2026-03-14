/***************
Nested Structure 
****************/

#include "stdio.h"
#include "string.h"
#include "conio.h"

struct SDate
{
    int m_Day;
    int m_Month; 
    int m_Year; 
};

struct SEmployee
{
    char m_Name[50];
    struct SDate m_BirthDate;
    struct SDate m_GraduationDate;
    int m_Salary; 
};

int main()
{
    struct SEmployee Employee_1 = {"Mohamed Ragab", 
                  {27,5,2001},
                  {24,9,2024},
                  500000}; 
                  
    printf("Name: %s\nBirthDate: %d/%d/%d\nGraduation Date: %d/%d/%d\nSalary: %d",
    Employee_1.m_Name, Employee_1.m_BirthDate, Employee_1.m_GraduationDate, Employee_1.m_Salary);
    
    return 0;
}