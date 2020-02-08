#include <stdio.h>
#include <stdlib.h>
 
void InsertionSort(int *a, int n)
{
    int i, value, index;
 
    for(i=1;i<n;i++)
    {
        value = a[i];
        index = i;
 
        while(index > 0 && a[index-1] > value)
        {
            a[index] = a[index-1];
            index--;
        }
 
        a[index] = value;
    }
}
 
int main()
{
    int ar[] = {7,2,4,1,5,3};
    int i, size = sizeof(ar) / sizeof(int);
 
    InsertionSort(ar, size);
 
    for(i=0;i<size;i++)
    {
        printf("%d ", ar[i]);
    }
 
    return 0;
}
