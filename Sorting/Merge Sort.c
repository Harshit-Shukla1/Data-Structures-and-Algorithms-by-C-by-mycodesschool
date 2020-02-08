#include <stdio.h>
#include <stdlib.h>
 
void Merge(int *left, int *right, int *A, int leftSize, int rightSize)
{
    int i,j,k;
 
    i = j = k = 0;
 
    while(i < leftSize && j < rightSize)
    {
        if(left[i] < right[j])
        {
            A[k] = left[i];
            i++;
        }
 
        else
        {
            A[k] = right[j];
            j++;
        }
 
        k++;
    }
 
    while(i < leftSize)
    {
        A[k] = left[i];
        k++;
        i++;
    }
 
    while(j < rightSize)
    {
        A[k] = right[j];
        k++;
        j++;
    }
}
 
void MergeSort(int *A, int size)
{
    int mid, i, *L, *R;
 
    if(size < 2)
        return;
 
    mid = size/2;
 
    L = (int*) malloc(mid*sizeof(int));
    R = (int*) malloc((size-mid)*sizeof(int));
 
    for(i=0;i<mid;i++)
    {
        L[i] = A[i];
    }
 
    for(i=mid;i<size;i++)
    {
        R[i-mid] = A[i];
    }
 
    MergeSort(L, mid);
    MergeSort(R, size-mid);
    Merge(L,R,A, mid, size-mid);
 
    free(L);
    free(R);
}
 
int main()
{
    int A[] = {2,4,1,6,8,5,3,7};
    int i;
    int size = sizeof(A) / sizeof(int);
 
    for(i=0;i<size;i++)
    {
        printf("%d ", A[i]);
    }
 
    printf("\n");
 
    MergeSort(A, size);
 
    for(i=0;i<size;i++)
    {
        printf("%d ", A[i]);
    }
 
 
    return 0;
}
