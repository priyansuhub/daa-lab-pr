#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void init_array(int arr[], int n) 
{
    for(int i=0; i<n; ++i)
        arr[i] = (rand() % 50) + 50;
}
void print_array(int arr[], int n)
{
    for(int i=0; i<n; ++i)
        printf("%d ", arr[i]);
    printf("\n");
}
void sort_method(int arr[], int n)
{
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            if(arr[j] < arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void merge(int arr[], int l, int m, int r)
{
    int i, j, k=l;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    i = 0; 
    j = 0; 
    while (i < n1 && j < n2) 
    {
        if (L[i] <= R[j]) 
            arr[k++] = L[i++];
        else 
            arr[k++] = R[j++];
    }
    while (i < n1) 
        arr[k++] = L[i++];
    while (j < n2) 
        arr[k++] = R[j++];
}
void mergeSort(int arr[], int l, int r)
{
    if (l < r) 
    {
        int m = (l+r) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int main() 
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    init_array(arr, n);
    printf("Array initialized is:\n");
    print_array(arr, n);
    
    clock_t start_t, end_t;
    double time;
    start_t = clock();
    mergeSort(arr, 0, n-1);
    end_t = clock();
    time = (double)(end_t - start_t)/CLOCKS_PER_SEC;
    printf("Time required for average case is : %f\n", time);
    start_t = clock();
    mergeSort(arr, 0, n-1);
    end_t = clock();
    time = (double)(end_t - start_t)/CLOCKS_PER_SEC;
    printf("Time required for best case is : %f\n", time);
    sort_method(arr, n);
    start_t = clock();
    mergeSort(arr, 0, n-1);
    end_t = clock();
    time = (double)(end_t - start_t)/CLOCKS_PER_SEC;
    printf("Time required for worst case is : %f\n", time);
    print_array(arr, n);
    return 0;
}