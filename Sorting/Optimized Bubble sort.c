#include<stdio.h>
#include<stdbool.h>
int main()
{
	int n,i,j,temp,arr[100];
	bool swapped;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		swapped=false;
		for(j=0;j<=n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				swapped=true;
			}
		}
		if(swapped==false)
			break;
	}
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;

}
