#include <stdio.h>
#include <stdlib.h>
void sort_desc(int arr[],int n)
{
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            if(arr[j]<arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
}
void heapify(int arr[], int N, int i)
{
    int largest = i;
    int left = 2 * i +1;
    int right = 2 * i + 2;
    if (left < N && arr[left] > arr[largest])
        largest = left;
    if (right < N && arr[right] > arr[largest])
        largest = right;
    if (largest != i) 
    {
        int temp = arr[i];
        arr[i]=arr[largest];
        arr[largest]=temp;
        heapify(arr, N, largest);
    }
    else
        return;
}

void heapSort(int arr[], int N)
{
    for(int i=N-1;i<=1;i--)
    {
        int temp=arr[i];
        arr[i]=arr[1];
        arr[1]=temp;
        N--;
        heapify(arr,N,1);
    }
}
void printArray(int arr[], int N)
{
    for (int i = 0; i < N; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main()
{
    int n;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    int arr[n+1];
    for(int i=1;i<=n;i++)
        arr[i] = rand() % 100 + 1;
    printf("array is :\n");
    printArray(arr, n);
    heapSort(arr,n);
    printf("Sorted array is\n");
    printArray(arr, n);
}