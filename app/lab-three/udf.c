#include<stdio.h>
void UDF1(int a[],int n)
{
    int i,j,c=0;
    for(i=0;i<n;i++)
    {
        c=1;
        if(a[i]==-1)
            continue;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                a[j]=-1;
                c++;
            }
        }
        if(c>n/2)
        printf("%d occurs more than half times\n",a[i]);
    }
}
void UDF2(int a[],int n)
{
    int count[21];
    for(int i=0;i<21;i++)
        count[i]=0;
    for(int i=0;i<n;i++)
    {
        count[a[i]]+=1;
        if(count[a[i]]>n/2)
            printf("%d occurs more than half times\n",a[i]);
    }
}
int main()
{
    int a[20],b[20];
    int i,n;
    scanf("%d",&n);
    printf("Enter the numbers\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        b[i]=a[i];
    UDF1(a,n);
    UDF2(b,n);
    return 0;
}