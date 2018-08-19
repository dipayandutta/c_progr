#include <stdio.h>

int main(){

    char str[100];
    char upper_case[100];
    int i;
    i = 0;

    printf("Enter string to convert in uppercase");
    printf("\n");
    gets(str);

    while(str[i] != '\0'){
        if(str[i]>='a' && str[i]<='z')
            upper_case[i] = str[i]-32;
        else
            upper_case[i] = str[i];
        i++;
    }
    upper_case[i] = '\0';
    printf("String converted to uppercase is ");
    printf("\n");
    puts(upper_case);

    return 0;
}