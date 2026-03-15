// enum: an enumeration is a user-defined data type that consists of integral constants.
// Enum variable takes only one value out of many possible values. 
// Enum is a good choice to work with flags. 
#include <stdio.h>

enum Gender{
    Male,
    Female
};

struct SPerson {
    char m_Name[100];
    enum Gender m_Gender;
};
int main() {
    
    int i;
    struct SPerson persons[] = {
        {"Andrea", Female},
        {"Bernhard", Male}
    };
    for(i=0; i<sizeof(persons)/sizeof(struct SPerson); i++){
        printf("%s - %s\n", persons[i].m_Name,
        (persons[i].m_Gender==Male)?"Male":"Female");
    }
    return 0;
}