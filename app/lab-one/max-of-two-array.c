#include<stdio.h>
int main()
{

    int a[20];
    int i,num,flag=1,n,p;
    int m1,m2;
    printf("enter the size\n");
    scanf("%d",&n);
    printf("Enter the numbers\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    m1=a[0];
    m2=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>m1)
            {
                p=i;
                m1=a[i];
            }
        if(a[i]>m2 && m1>=m2 && i!=p)
            m2=a[i];
    }
    printf("numbers are %d and %d and sum is %d\n",m1,m2,(m1+m2));
}