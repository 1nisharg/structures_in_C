#include <stdio.h>
#include <string.h>

//user defined
struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main() {
    /*    STRUCT USING DOT OPERATOR
    struct student ece[100];
    ece[0].roll = 1664;
    strcpy(ece[0].name, "Tara singh");
    ece[0].cgpa = 9.1;

    printf("roll = %d \n", ece[0].roll);
    printf("name = %s \n", ece[0].name);
    printf("cgpa = %.2f \n", ece[0].cgpa);
*/

//    INITIALIZING STRUCTURE

struct student s1 = {1664, 9.1, "nish"};
printf("roll =  %d \n", s1.roll);
    return 0;
}