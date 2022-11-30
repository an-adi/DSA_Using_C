#include <stdio.h>

void display_list(int arr[] , int n)
{
	int i;
	
	printf("\nThe Unsorted Elements Are\n");
	for (i=0; i<n; i++)
	{
		printf("%d\n", arr[i]);
	}

}


void quick_sort(int arr[] , int L, int H)
{
	int pivot,n, temp, i;
	L = arr[0]; 
	arr[H] =  arr[n - 1];
	int Low = L;
	int High = H;


	
	while ( L< H)
	{
		while (arr[L + 1] < pivot)
			{
				L++;
			}
		while (arr[H] > pivot)
			{
				H--;
			}
		if (arr[L] < arr[L+1])
			{
				temp = arr[L];
				arr[L] = arr [H];
				arr[H] = temp;
			}
	}
		if (pivot > arr[H])
		{
			temp = pivot;
			pivot = arr[H];
			arr[H] = temp;
		}

		quick_sort(arr , 0, H-1);
		quick_sort(arr , L, H);

		for (i=0; i<n; i++)
			{
				printf("%d", arr[i]);
			}
	}





void main()
{

	// creating and accepting array
	int arr[100] ,n, i, L, H;

	printf("Enter The Size Of Array\n");
	scanf_s("%d", &n);

	printf("Enter The Array Element\n");
		for (i=0; i<n; i++)
			{
				scanf_s("%d", &arr[i]);
			}

		display_list(arr , n);
		quick_sort(arr , L, H);


}
