/******************************************************************************
Adding two complex numbers using Structure and Function 
*******************************************************************************/

#include <stdio.h>

struct SComplex
{
    double m_R; // Real Number 
    double m_I; // Imaginary Number 
};

struct SComplex ReadComplex(){
    struct SComplex C; 
    printf("Enter Complex Value: ");
    fflush(stdout);
    scanf("%lf, %lf", &C.m_R, &C.m_I);
    return C; 
}

struct SComplex AddComplex(struct SComplex A, struct SComplex B){
    struct SComplex C;
    C.m_R = A.m_R + B.m_R;
    C.m_I = A.m_I + B.m_I;
    return C; 
}

void PrintComplex(struct SComplex C){
    printf("Result = (%lf) + J (%lf)\r\n", C.m_R, C.m_I); 
}

int main()
{
    struct SComplex X, Y, Z; 
    X = ReadComplex();
    Y = ReadComplex();
    Z = AddComplex(X, Y);
    PrintComplex(Z);

    return 0;
}