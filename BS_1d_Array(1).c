#include <stdio.h>

int i; // we use i too often so we declare it gloably
//the void display_display function is used to display the unsorted arry enter by user and also the array sorted after bubble sort
//the function is parameterised function and the definition of function is given 
//all the functions are called in main function of the program always
void display_list(int arr[], int n)
{
	
		
	printf("[");

		for (i=0; i<n; i++)
			{
				printf("%d ,", arr[i]); //the logic will display the unsorted as well as sorted array in [1, 2, 3,..] manner
			}

	printf("]\n");
	printf("\n");
}

/* the function used is to sort the data in acending order, the array will sort from right to left(<---) and the largest element will sort first 
the parameter given to user define functions are not neccesary to be as same as main functions variables but they should be in mainly used 
variables od that function definition*/
void bubble_sort (int arr[], int n)
{   
	int itr, temp, flag; 
		
		for (itr=1; itr < n; itr++)  /*itr means itteration it has no connection with swapping it only used for traversing array and its not array index and its should stop at one last index of array means element-1 position*/
			{
				flag=0;
				for (i=0; i < n-itr; i++) //i is index of array and it is alwas on one less index of last index and its used for swapping array
					{
						printf("We Are Compairing [%d,%d]\n", arr[i], arr[i+1]); //it will show elements we are comparing

						if(arr[i] > arr[i+1]) // array will swap in acending order and also biggest element will swap first and swapping is from right to left
						{
							flag=1;
							temp = arr[i];
							arr[i] = arr[i+1];
							arr [i+1] = temp;
							printf("Swapping Done Of[%d,%d]\n", arr[i], arr[i+1]); //it will show elements we have swapped
						}
					}
				if(flag==0) //it is for if array is already sorted
				{
					break;
				}
			}
	printf("\nThe Sorted List is\n");
	display_list(arr, n); //the function call is given to display sorted elements
}

//this is main function of program and all function defined should call here 
void main()
{
	int  n;
	int arr[100];

	//the below logic is to get array size and array elements 
    printf("Please Enter The Array Size:\t");
		scanf_s("%d", &n);
	printf("Please Enter The Array Element:\n");
		for (i=0; i<n; i++)
			{
				scanf_s("%d", &arr[i]);
			}
	//it call to display_list fun to print unsorted array
	printf("The Unsorted List is\n");
		display_list(arr, n);

	//it is call to  bubble_sort fun to print sorted array
		bubble_sort(arr, n);
}


