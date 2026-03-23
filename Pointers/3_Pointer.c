/* 
There are only two arithmetic operations that you can use on pointers:
- addition
- subtraction

Each time a pointer is incremented, 
it points to the memory location of the next element of its base type. 

The compiler will always reserve 8 bytes independently from the pointer datatype.
Pointer size is depend only on the machine. 

The pointer datatype doesn't control the memory size of the pointer variable.
The pointer datatype identifies the behavior of the operations carried out 
on the pointer variable (Read/Write). 
*/

#include <stdio.h>

int main() {
    
    int x[5] = {1, 2, 3, 4, 5};
    int* p = x;
    printf("%d\n", *p);
    p++;
    printf("%d\n", *p);
    p = x + 4;
    printf("%d\n", *p);
    p--;
    printf("%d\n", *p);
    return 0;
}