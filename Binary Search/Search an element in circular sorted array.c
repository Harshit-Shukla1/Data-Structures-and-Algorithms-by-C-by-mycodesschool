#include<stdio.h>
int circulararraysearch(int A[],int n,int x)
{
	int low=0,high=n-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(x==A[mid])
			return mid;
		if(A[mid]<=A[high])
		{
			if(x>A[mid] && x<=A[high])
				low=mid+1;
			else
				high=mid-1;
		}
		else
		{
			if(x>=A[low] && x<A[mid])
				high=mid-1;
			else
				low=mid+1;
		}
	}
	return -1;
}
int main(void)
{
	int A[]={9,10,2,5,6,8};
	int target=5;
	int n=sizeof(A)/sizeof(A[0]);
	int index=circulararraysearch(A,n,target);
	if (index!=-1)
		printf("Element found at index %d",index);
	else
		printf("Element not found in the array");
	return 0;
}