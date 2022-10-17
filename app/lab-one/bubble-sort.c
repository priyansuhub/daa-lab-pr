#include <stdio.h>
int main()
{
    int array[20],n,i,j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&array[i]);
    for(i=0;i<n-1;i++) 
        for(j=0;j<n-i-1;j++) 
            if (array[j]>array[j+1]) 
            {
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
                c++;
            }
    printf("array after sorting is :\n ");
    for(i=0;i<n;i++)
        printf("%d ",array[i]);
    printf("\n frequency is %d\n ",c);
    return 0;
}