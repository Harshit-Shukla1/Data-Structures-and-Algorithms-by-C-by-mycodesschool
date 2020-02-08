#include <stdio.h>

int BinarySearch(int A[], int N, int x, int searchFirst)
{
	
	int low = 0, high = N - 1;

	
	int result = -1;

	
	while (low <= high)
	{
		
		int mid = (low + high)/2;

		
		if (x == A[mid])
		{
			result = mid;

			
			if (searchFirst)
				high = mid - 1;

			
			else
				low = mid + 1;
		}

		
		else if (x < A[mid])
			high = mid - 1;

		
		else
			low = mid + 1;
	}

	
	return result;
}


int main(void)
{
	int A[] = {2, 5, 5, 5, 6, 6, 8, 9, 9, 9};
	int target = 5;

	int n = sizeof(A)/sizeof(A[0]);
	
	
	int first = BinarySearch(A, n, target, 1);
	
	
	int last = BinarySearch(A, n, target, 0);

	int count = last - first + 1;

	if (first != -1)
		printf("Element %d occurs %d times.", target, count);
	else
		printf("Element not found in the array.");

	return 0;
}