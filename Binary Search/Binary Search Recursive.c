#include <stdio.h>
#include <stdlib.h>


int binSearch(int *a, int start, int end, int x)
{
    int mid;
    if(start > end) return -1;
    mid = (start+end)/2;
 
    if(x == a[mid])
        return mid;
    else if(x < a[mid])
        return binSearch(a,start,mid-1,x);
    else
        return binSearch(a,mid+1,end,x);
}
 
int main()
{
    int A[] = {1,2,3,4,5,6,7},x,index;
    scanf("%d", &x);
    index = binSearch(A,0,7,x);
    if(index != -1) printf("%d found at %d index\n", x, index);
    else    printf("%d not found in the array\n",x);
 
    return 0;
}