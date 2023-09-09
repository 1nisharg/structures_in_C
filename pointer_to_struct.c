/* 
struct student s1;
struct student *ptr;
ptr = &s1;
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
printf("roll =  %d \n", s1.roll);

struct student *ptr = &s1;
printf("roll =  %d \n", (*ptr).roll); // displaying roll via *ptr.. same O/P -- diff method

    return 0;
}