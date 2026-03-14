/******************************************************************************

C has a built-in feature, called a "bit-field", that allows you to access 
a single bit. 
It allows you to specify exactly how many bits a structure member should occupy.

While standard types like "int" or "char" take up fixed blocks of bytes, bit-field 
let you slice that memory much more thinly. 

Bit-fields can be useful for a number of reasons, such as:
1. Massive memory saving
2. Hardware Register Mapping
3. Protocol Headers
*******************************************************************************/

#include "stdint.h"
#include "stdio.h"

struct SDate
{
    int day;
    int month; 
    int year; 
}_Date;

struct SInfo
{
    int age;
    char symbol; 
}_SInfo;

struct SInfo_2
{
    int age;
    char symblo; 
}__attribute__((packed)) _SInfo_2; // not recommended for performance 
                                  // old ARM can't read a 4-byte if it starts
                                 // at an odd memory address. 
                                //The CPU has to perform two separate reads 
                               // and stitch the bits together, which is much slower

int main()
{
    printf("size in bytes of int: %d\n", sizeof(int));
    printf("size in bytes of char: %d\n", sizeof(char));
    printf("size of SDate: %d\n", sizeof(_Date));
    printf("size of SInfo: %d\n", sizeof(_SInfo));  // compiler added 3 invisible bytes (podding)
    printf("size of SInfo_2: %d\n", sizeof(_SInfo_2));  // NO Padding 
    return 0;
}