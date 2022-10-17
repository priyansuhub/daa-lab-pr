#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int maxele(int a[],int n)
{
    if(n==1)
        return a[0];
    else
    {
        int x=maxele(a,n-1);
        if(a[n-1] > x)
            return a[n-1];
        else
            return x;
    }
}
int minele(int a[],int n)
{
    if(n==1)
        return a[0];
    else
    {
        int x=minele(a,n-1);
        if(a[n-1] < x)
            return a[n-1];
        else
            return x;
    }
}
int maxb(int a[],int n)
{
    int max=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    return max;
}
int minb(int a[],int n)
{
    int min=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]<min)
            min=a[i];
    }
    return min;
}
int main() {
    // Write C code here
    int a[100];
    int i,n=100,max,min;
    //n = rand() % 10 + 1;
    printf("Enter %d numbers\n",n);
    for(i=0;i<n;i++)
        a[i]=rand() % 50 + 1;
    
    clock_t start_t, end_t;
    double time;
    start_t = clock();
    max=maxele(a,n);
    min=minele(a,n);
    end_t = clock();
    time = (double)(end_t - start_t)/CLOCKS_PER_SEC;
    printf("maximum=%d",max);
    printf("minimum=%d",min);
    printf("Time required for D&C : %f\n", time);
    start_t = clock();
    max=maxb(a,n);
    min=minb(a,n);
    end_t = clock();
    time = (double)(end_t - start_t)/CLOCKS_PER_SEC;
    printf("maximum=%d",max);
    printf("minimum=%d",min);
    printf("Time required for brute force : %f\n", time);
    return 0;
}