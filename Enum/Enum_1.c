// enum: an enumeration is a user-defined data type that consists of integral constants.
// Enum variable takes only one value out of many possible values. 
// Enum is a good choice to work with flags. 

#include <stdio.h>
enum week {
    sunday = 0, 
    monday = 5, 
    tuesday = 10, 
    wednesday = 15, 
    thursday = 20, 
    friday = 25, 
    saturday = 30
}days;

int main() {
    
    int day_1;
    day_1 = sunday; 
    printf("%d\n", day_1);
    
    days = monday;
    printf("%d", days);
    
    return 0;
}