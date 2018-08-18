/*
	Sample Program to read and display numbers
*/

#include <stdio.h>

int main(){
		int inc;
		int number;
		int array[10];

		printf("\n");
		/*Ask user for the number of elements for the array to enter*/
		printf("Enter number of the items for the array");
		scanf("%d",&number);

		for(inc=0;inc<number;inc++){
						printf("\n");
						printf("Enter %d number ",inc);
						scanf("%d",&array[inc]);
				}

		printf("\n");
		/*Displaying items in the array*/

		for(inc=0;inc<number;inc++){
				printf("\n");
				printf("%d th element of the array is %d",inc,array[inc]);
				}

		return 0;
		}
