/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include "stdio.h"

void dump_memory(char* ptr, int size);

struct Sdata {
  unsigned char data1;
  unsigned int data2;
  unsigned char data3;
  unsigned short data4;
};

struct Sdata_opt {
  
  unsigned int data2;   // 4 bytes
  unsigned short data4; // 2 bytes
  unsigned char data1;  // 1 byte
  unsigned char data3;  // 1 byte
  
};

struct Sdata gdata1; 
struct Sdata_opt gdata2; 

int main()
{
    int standard_size;
    standard_size = 2*sizeof(char) + sizeof(int) + sizeof(short);
    printf("Standard Size = %d\n", standard_size);
    gdata2.data1 = 0XAA;
    gdata2.data2 = 0XFFFFFFFF;
    gdata2.data3 = 0X55;
    gdata2.data4 = 0XA5A5;
    
    int total_size = sizeof(struct Sdata_opt);
    printf("size of struct Sdata (non packing) = %d\n", sizeof(struct Sdata_opt));
    dump_memory((char*)&gdata2, total_size);
    return 0;
}

void dump_memory(char* ptr, int size){
    int i;
    for (i=0; i<size; i++){
        printf("%p      %X\n", ptr, (unsigned char)*ptr);
        ptr++;
    }
}