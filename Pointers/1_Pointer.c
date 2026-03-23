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
    int x = 5, y =9, z;
    printf("x at location %p contains %d\n", (void*) &x, x);
    printf("y at location %p contains %d\n", (void*) &y, y);
    z = (char*) &x - (char*) &y;
    printf("Pointer Size = %td", z);

    return 0;
}