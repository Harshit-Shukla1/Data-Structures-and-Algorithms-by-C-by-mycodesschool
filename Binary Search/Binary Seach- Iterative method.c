#include <stdio.h>
#include <stdlib.h>
 
int binSearch(int *a, int size, int x)
{
    int mid, start = 0, end = size-1;
 
    while(start <= end)
    {
        mid = (start+end)/2;
        if(x == a[mid])
            return mid;
        else if(x < a[mid]) {
            end = mid-1;
        }
        else {
            start = mid+1;
        }
    }
    return -1;
}
 
int main()
{
    int A[] = {1,2,3,4,5,6,7}, x,index; ;
    printf("Enter a number:");
    scanf("%d", &x);
    index = binSearch(A,8,x);
    if(index != -1) printf("%d found at %d index\n", x, index);
    else    printf("%d not found in the array\n",x);
 
    return 0;
}
