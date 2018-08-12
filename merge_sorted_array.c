/*
		program to merge to sorted array
*/
#include <stdio.h>

int main(){
		
				int first_array[10], second_array[10],merge_array[10];
				int i;//Array index incrementar variable
				int n1;//Number of elements for array1
				int n2;//Number of elements for array2
				int index;
				int m; //Variable to store total number of items in both array
				int index_first ;
				int index_second;
				index = 0;

				/*For the First Array*/
				printf("Enter the number of elements for First Array");
				printf("\n");
				scanf("%d",&n1);
				printf("\n");
				printf("Enter the elements of the first array");
				printf("\n");
				for(i=0;i<n1;i++){
								printf("\n");
								printf("first_array[%d]= ",i);
								scanf("%d",&first_array[i]);
						}

				/*For the second array*/
				printf("Enter the number of elements for the second Array");
				printf("\n");
				scanf("%d",&n2);
				printf("\n");
				printf("Enter the elements of the second Array");
				printf("\n");

				for(i=0;i<n2;i++){
								printf("\n");
								printf("second_array[%d]= ",i);
								scanf("%d",&second_array[i]);
						}
				m = n1+n2;
				while(index_first<n1 && index_second<n2){
								if(first_array[index_first]< second_array[index_second]){
												merge_array[index] = first_array[index_first];
												index_first++;
										}
								else{
												merge_array[index] = second_array[index_second];
												index_second++;
										}
								index++;
						}

				/* if the elements of the first array are over and the second array has some elements*/
				if(index_first == n1){
								while(index_second < n2){
												merge_array[index] = second_array[index_second];
												index_second++;
												index++;
										}
						}

				/*if the elements of the second array are over and the first array has some elements*/
				else if(index_second == n2){
								while(index_first < n1){
												merge_array[index] = first_array[index_first];
												index_first++;
												index++;
										}
						}

				printf("\n");
				printf("Displaying the merged Array ");
				printf("\n");
				for(i=0;i<m;i++){
								printf("\n");
								printf("mergerd_array[%d]=%d",i,merge_array[i]);
						}
		
				return 0;
		}

