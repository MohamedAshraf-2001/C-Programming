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

# You can't take the address of a bit-field. 
# Bit-field can't be arrayed.

*******************************************************************************/

#include "stdint.h"
#include "stdio.h"

struct 
{
    unsigned char bit_1:1;
    unsigned char bit_2:1;
    unsigned char bit_3:1;
    unsigned char bit_4:1;
    unsigned char bit_5:1;
    unsigned char bit_6:1; 
    unsigned char bit_7:1;
    unsigned char bit_8:1; 
} status_1;

struct 
{
    unsigned int bit_1:1;
    unsigned int bit_2:1;
    unsigned int bit_3:1;
    unsigned int bit_4:1;
    unsigned int bit_5:1;
    unsigned int bit_6:1; 
    unsigned int bit_7:1;
    unsigned int bit_8:1;
} status_2;

int main()
{
    printf("size of status_1: %d\n", sizeof(status_1));
    printf("size of status_2: %d\n", sizeof(status_2));
    return 0;
}