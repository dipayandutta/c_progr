#include <stdio.h>

int main(){

    struct DOB{
        int day;
        int month;
        int year;
    };

    struct student {
        int roll_no;
        char name[20];
        float fees ;
        struct DOB date;
    };
    struct student james;

    printf("Enter the roll number\n");
    scanf("%d",&james.roll_no);

    printf("Enter Students Name \n");
    scanf("%s",james.name);

    printf("Enter Fees to be paid\n");
    scanf("%f",&james.fees);

    printf("Enter DOB");
    scanf("%d %d %d",&james.date.day,&james.date.month,&james.date.year);

    printf("\n");
    printf("\n");
    printf("\n");

    printf("Students name %s",james.name);
    printf("\n");
    printf("Studnents Roll Number is  %d",james.roll_no);
    printf("\n");
    printf("DOB is %d/%d/%d",james.date.day,james.date.month,james.date.year);

    return 0;
}