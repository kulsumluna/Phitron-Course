#include <stdio.h>


/* Function declaration to find sum of array */
int sum(int arr[], int i,int n){
    /* Recursion base condition */
    if(i >= n)
        return 0;
        
    return (arr[i] + sum(arr, i + 1,n));
}


int main()
{
   
    int N, i, sumofarray;
    
    
    /* Input size and elements in array  */
    
    scanf("%d", &N);
    int arr[N];
    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    
    sumofarray = sum(arr, 0, N);
    printf("%d", sumofarray);
    
    return 0;
}


/**
 * Recursively find the sum of elements in an array.
 */
