/*
	Sample program to find the largest and the second largest elements in the array 
*/

#include <stdio.h>

int main(){
		
		int inc;
		int number;
		int array[10];
		int largest ;
		int second_largest;

		printf("Enter number of elements in the array \n");
		scanf("%d",&number);

		for(inc=0;inc<number;inc++){
				printf("Enter %dth number ",inc);
				scanf("%d",&array[inc]);
				}

		printf("Searching Beigns....");
		printf("\n");

		/*First find the largest element in the array*/
		/*let take the largest element is the first element*/

		largest = array[0];
		printf("\n");
		printf("Current Largest is %d",largest);

		for(inc=0;inc<number;inc++){
						if(largest<array[inc]){
										largest = array[inc];
								}
				}
		printf("\n");
		printf("Largest element in the array %d",largest);
		printf("\n");
		/*let the second largest element of the array is 1st element of the array*/
		second_largest = array[1];
		printf("\n");
		printf("Current Second largest element is %d",second_largest);
		printf("\n");
		for(inc=0;inc<number;inc++){
						if(array[inc] != largest){
										if(array[inc] > second_largest){
														second_largest = array[inc];
												}
								}
				}

		printf("Second Largest element of the array is %d",second_largest);
		printf("\n");
		return 0;
		}
