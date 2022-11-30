#include <stdio.h>
int i;
void diplay_list(int arr[] , int n)
{
	printf("[");
	for (i=0 ; i<n; i++)
	{
		printf("%d , ", arr[i]);
	}
	printf("]\n");
}

void main()
{
	int arr[100], n;
	printf("Enter The Size Of Array\n");
	scanf_s("%d", &n);
	printf("Enter The Array Elements\n");
	for (i=0; i<n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	printf("The Unsorted List Is:\n");
	diplay_list(arr , n);
}