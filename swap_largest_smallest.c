/*Program to swap largest and smallest element in array*/

#include <stdio.h>

/*Function Declearation*/
void read_array(int my_array[],int);
void display_array(int my_array[],int);
void interchange(int arr[],int);
int find_biggest_position(int my_array[10],int n);
int find_smallest_position(int my_array[10],int n);

/*main function starts here*/
int main(){
	
	int arr[10],n;

	printf("\n");
	printf("Enter the size of the array");
	printf("\n");
	scanf("%d",&n);

	read_array(arr,n);
	interchange(arr,n);

	printf("Display the new array ");
	printf("\n");

	display_array(arr,n);

	return 0;
	}

/*Read array items*/
void read_array(int my_array[10],int n){
	
	int i;
	for(i=0;i<n;i++){
		printf("arr[%d]=",i);
		scanf("%d",&my_array[i]);
		}
	}

/*Void display array elements*/
void display_array(int my_array[10],int n){
	int i;
	for(i=0;i<n;i++){
			printf("%d",my_array[i]);
		}

	}

/*interchange function*/
void interchange(int my_array[10],int n){
	
		int temp;
		int big_pos;
		int small_pos;

		big_pos = find_biggest_position(my_array,n);
		small_pos=find_smallest_position(my_array,n);
		
		temp    = my_array[big_pos];
		my_array[big_pos] = my_array[small_pos];
		my_array[small_pos] = temp;
	}

/*Find the biggest element in the array */
int find_biggest_position(int my_array[10], int n){
	
	int i;
	int large ;
	int pos;

	large = my_array[0];
	pos = 0;

	for(i=1;i<n;i++){
		if(my_array[i]>large){
				large = my_array[i];
				pos = i;
			}
		}

		return pos;
	}

/*Find the smallest element in the array*/
int find_smallest_position(int my_array[10],int n){
		
		int i;
		int small;
		int pos ;

		small = my_array[0];
		pos   = 0;
		for(i=1;i<n;i++){
			if(my_array[i]<small){
					small = my_array[i];
					pos = i;
				}
			}
			return pos;
	}
