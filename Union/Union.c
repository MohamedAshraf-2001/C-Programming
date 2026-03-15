// Union is a special type that supports different overlapped data types. 
// The amount of memory required to store a structure variable is the sum of mempry size of all members.
// But, the memory required to store a union variable is the memory required for the largest element of an union. 
// Only one union member can be accessed at a time. 
#include <stdio.h>

union unionJob{
    char name[32];
    float salary;
    int workerNo;
}uJob;

struct structJob{
    char name[32];
    float salary;
    int workerNo;
}sJob; 

int main() {
    printf("size of the union: %d\n", sizeof(uJob));
    printf("size of the struct: %d\n", sizeof(sJob));
    return 0;
}