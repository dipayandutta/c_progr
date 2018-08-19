#include <stdio.h>
#include <string.h>
int main(){

    struct student{
        int rollno;
        float age;
        char name[80];
        char section[10];
    };
    struct student james;

    struct student merry;

    james.rollno = 10;
    james.age = 8;
    strcpy(james.name,"james bond");
    strcpy(james.section,"A Section");

    printf("Students Name is %s",james.name);
    printf("\n");
    printf("Strunders Section is %s ",james.section);
    printf("\n");
    printf("Students Roll Number is %d",james.rollno);
    printf("\n");
    printf("Students age is %d",james.age);
    printf("\n");
    printf("\n");
    merry.age = 11;
    merry.rollno = 21;
    strcpy(merry.name,"Merry");
    strcpy(merry.section,"A Section");

    printf("2nd Students name is %s",merry.name);
    printf("\n");
    return 0;
}