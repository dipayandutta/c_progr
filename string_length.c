#include <stdio.h>

int main(){

    char str[100];
    int i =0;
    int length;
    
    /*User input for getting the string*/
    printf("Enter string to find the length");
    gets(str);/*read the string from the user input*/
    while(str[i] != '\0'){
        i++;
    }
    length = i;

    /*printing the string length*/
    printf("\n");
    printf("String length is %d",length);

    return 0;
}