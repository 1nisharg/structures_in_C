/*
typedef struct ComputerEngineeringStudent{
    int roll;
    float cgpa;
    char name[100];
} coe;

*/

#include <stdio.h>
#include <string.h>

//user defined
typedef struct student {
    int roll;
    float cgpa;
    char name[100];
} stu; //stu is called 'alias'

int main() {
    stu s2;
    s2.roll = 1663;
    printf("roll: %d \n", s2.roll);

    return 0;
}
