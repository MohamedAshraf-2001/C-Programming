#include "stdio.h"
#include "stdint.h"

#pragma pack(1)
struct {
    unsigned char data1; 
    unsigned int data2;
    unsigned char data3;
    unsigned short data4;
}gdata;

void dump_memory(char* ptr, int size);

int main()
{
    // struct Sdata gdata;
    gdata.data1 = 0xAA;
    gdata.data2 = 0xFFFFFFFF;
    gdata.data3 = 0x55;
    gdata.data4 = 0xA5A5;
    int total_size = sizeof(gdata);
    printf("size of Sdata: %d\n", total_size);
    // printf("gdata.data2: %X", gdata.data2);
    dump_memory((char*)&gdata, total_size);
    

    return 0;
}

void dump_memory(char* ptr, int size){
    int i;
    for(i = 0; i < size; i++){
        printf("%p      %X\n", ptr, (unsigned char)*ptr);
        ptr++;
    }
}