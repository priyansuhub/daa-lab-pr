#include <stdio.h>
int max_sum(int a[],int n)
{
    int max=0,i,j,sum=0;
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=i;j<n;j++)
        {
            sum+=a[j];
            if(sum>max)
                max=sum;
        }
    }
    return max;
}
void main()
{
	int a[20],n,max,i;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
		scanf("%d", &a[i]);
	max=max_sum(a,n);
	printf("\nMaximum Sum is %d\n",max);
}