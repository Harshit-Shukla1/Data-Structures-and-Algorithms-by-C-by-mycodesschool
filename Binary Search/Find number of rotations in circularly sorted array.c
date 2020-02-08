#include <stdio.h>


int findRotationCount(int arr[], int n)
{
	
	int low = 0, high = n - 1,mid,next,prev;

	
	while (low <= high)
	{
		
		if (arr[low] <= arr[high])
			return low;

		mid = (low + high) / 2;

		
		next = (mid + 1) % n;
		prev = (mid - 1 + n) % n;

		
		if (arr[mid] <= arr[next] && arr[mid] <= arr[prev])
			return mid;

		
		else if (arr[mid] <= arr[high])
			high = mid - 1;

		

		else if (arr[mid] >= arr[low])
			low = mid + 1;
	}


	return -1;
}


int main(void)
{
	int arr[] = { 8, 9, 10, 2, 5, 6 },n,count;
	n = sizeof(arr) / sizeof(arr[0]);

	count = findRotationCount(arr, n);
	printf("The array is rotated %d times", count);

	return 0;
}