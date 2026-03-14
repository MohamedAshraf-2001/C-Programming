#include "stdio.h"

struct {
    char bit_1: 1;
    char bit_2: 1;
    char bit_3: 1;
    char bit_4: 1;
    char bit_5: 1;
    char bit_6: 1;
    char bit_7: 1;
    char bit_8: 1;
}bit_field;

struct {
    char bit_1;
    char bit_2;
    char bit_3;
    char bit_4;
    char bit_5;
    char bit_6;
    char bit_7;
    char bit_8;
}Sstandard;

int main()
{
    printf("Bit Field: %d\n", sizeof(bit_field));
    printf("Schar: %d\n", sizeof(Sstandard));
    return 0;
}
