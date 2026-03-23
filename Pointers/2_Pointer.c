/* A Pointer is a variable that holds a memory address. 
This address is the location of another variable in memory.
Pointer generally have a fixed size, it depends upon different issues like OS, 
CPU Architecture. 

<Pointer data type> *<Variable_Name>;

The Pointer SIZE is equivalent to memory location address size:
- Ex: for 64 machine = 64 bit (It's common to all data types).
*/

#include <stdio.h>

int main() {
    
    int* px = (int*)0x01;
    char* py = (char*)0x02;
    long long* pz = (long long*)0x03;
    printf("px = 0x%x, py = 0x%x, pz = 0x%x\n", px, py, pz);
    
    px++; // increment by 4 bytes
    py++; // increment by 1 byte
    pz++; // increment by 8 bytes
    printf("px = 0x%x, py = 0x%x, pz = 0x%x", px, py, pz);

    return 0;
}