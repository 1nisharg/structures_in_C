/*
function prototype:-
void printInfo(struct student s1);
*/


#include <stdio.h>
#include <string.h>

//user defined
struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main() {

//    INITIALIZING STRUCTURE

struct student s1 = {1664, 9.1, "nish"};
printInfo(s1);
return 0;
}


void printInfo(struct student s1) {
printf("student_roll : %d \n", s1.roll);
printf("student_name : %s \n", s1.name);
printf("student_cgpa : %d \n", s1.cgpa);
}