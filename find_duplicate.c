#include <stdio.h>

int main(){
		
		int array[10];
		int number;
		int inc;
		int j;
		int flag;

		flag = 0;

		printf("\n");
		printf("Enter the maximum number of elements in the array");
		scanf("%d",&number);
		printf("\n");
		/*store the elements of the array*/
		for(inc=0;inc<number;inc++){
				printf("Enter %dth number ",number);
				scanf("%d",&array[inc]);
			}

		/**Searching for the duplicate **/
		for(inc=0;inc<number;inc++){
				for(j=inc+1;j<number;j++){
						if(array[inc] == array[j] && inc!=j){
								flag = 1;
								printf("\n");
								printf("Duplicate found at location %d and %d",inc,j);
								printf("\n");
							}
					}
			}

			if (flag == 0){
					printf("No Duplicate key found!");
					printf("\n");
				}
	}
