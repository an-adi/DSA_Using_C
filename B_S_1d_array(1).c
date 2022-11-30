#include <stdio.h>


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
}