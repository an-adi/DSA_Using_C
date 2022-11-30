#include <stdio.h>

void  linear_search(int arr[] , int n)  //the linear search logic
{
	int m ,i, check=0;

	printf("Enter The Element You Want To Search\n");
	scanf_s("%d", &m);

	for (i=0; i<n; i++) //for loop to travers array
	{ 
		if(arr[i]==m) //only enter when finding elements matches with array elements
		{ 
			check=1;  //it wiil truns to 1 to end loop
			printf("Element Found At %d Index\n", i);
		}
	}	
		if(check==0) //if the element is not found then only execute
			{
				printf("The Element Not Found\n");
			}
	
	}


void main()
{
	int arr[100];
	int n, i;
	
	printf("Enter The Size Of Array \n"); //accept array
	scanf_s("%d", &n);

	printf("Enter The Array Elements\n");
		
		for (i=0;i<n; i++)
			{
				scanf_s("%d", &arr[i]);
			}

	printf("The Array Elements Are\n"); // print array
	
		printf("[");
			for (i=0;i<n; i++)
				{
					printf("%d , ", arr[i]);
				}
		printf("]\n");

    linear_search(arr , n);  //calling function
}