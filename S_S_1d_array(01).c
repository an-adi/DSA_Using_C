#include <stdio.h>

//the void display_list function is used to display the unsorted arry enter by user and also the array sorted after selection sort
//the function is parameterised function and the definition of function is given 
//all the functions are called in main function of the program always
	void display_list(int arr[], int n)
{
	int i;
		
	printf("[");

		for (i=0; i<n; i++)
			{
				printf("%d ,", arr[i]); //the logic will display the unsorted as well as sorted array in [1, 2, 3,..] manner
			}

	printf("]\n");
	printf("\n");
}

	/* the function used is to sort the data in acending order, the array will sort from left to right(--->) and the smallest element will sort first 
the parameter given to user define functions are not neccesary to be as same as main functions variables but they should be in mainly used 
variables of that function definition*/

 void selection_sort(int arr[] , int n)
{
	 int i, j, temp, swap_check, itr=0;
		
		for (i=0; i<n-1; i++) //this loop stop arr[i] at one position and compare with other if found less then replace
			{
				itr++;
				swap_check = 0;
		 
				for (j=i+1; j<n; j++) //this loop will traves arr[j] array and it will compare at static arr[i] postion and on condition it replace
				 {
					 printf("We are Swapping [%d , %d]\n", arr[i] , arr[j]); //shows element going to swap
			
					 if(arr[i] > arr[j]) // if the i element is greater it will replace j element which is less than i
					{
						swap_check=1; //it check array is already sorted or not and saves time
					    temp = arr[i];
					    arr[i] = arr[j];
						arr[j] = temp;
						printf("Swapping Done Of [%d , %d]\n", arr[i] , arr[j]); //it shows swap element after swapping
						display_list(arr , n); //it will shows each time after swapping array list
					 }
				}
				if(swap_check==0) // loop is to save unneccesary time
				 {
					 break; ///break outer loop
				 }
			 }
	 
		printf("The Number Of Iteration Are %d*\n\n", itr); //it shows number of iteration done that is number of execution of outer loop {i}
	 
		printf("The Sorted Array Is:\n"); //finalized sorted list is printed
			display_list(arr , n);
 }




void main()
{
	int arr[100], i, n;
	
	printf("Enter The Size Of Array\t");
	scanf_s("%d", &n);
	
	printf("Enter The Elements Of Array\n");
		for (i=0; i<n; i++) //ecepting array element
			{
				scanf_s("%d", &arr[i]);
			}
	
	printf("The Unsorted Array Is:\n"); //first unsorted array is printing
		display_list( arr , n); //call to display_list
		selection_sort(arr , n); //call to selection_sort
}