/*Program to find the largest and the smallest element in the array*/

#include <stdio.h>

int main(){

		int largest;
		int smallest;
		int array[10];
		int numbers;
		int inc;

		
		printf("\n");
		printf("Enter number of elements to store in the array");
		scanf("%d",&numbers);

		printf("Enter numbers on by one");
		for(inc=0;inc<numbers;inc++){
				printf("array[%d] = ",inc);
				scanf("%d",&array[inc]);
			}
		largest = array[0];
		smallest = array[numbers];

		/*Traverse the array and check the largest*/
		for(inc=0;inc<numbers;inc++){
				if(array[inc]>largest){
						largest = array[inc];
					}
			}

			printf("%d",largest);

			/*Traverse the array and check the smallest*/
			for(inc=0;inc<numbers;inc++){
					if(array[inc]<smallest){
							smallest = array[inc];
						}
				}
				printf("\n");
				printf("%d",smallest);
		}
