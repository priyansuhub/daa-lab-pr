#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[20];
    int i,n,num,l=0,h,mid,flag=0,c=0,pos;
    n = rand() % 10 + 1;
    printf("Enter %d numbers\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    num = rand() % 10 + 1;
    printf("number to be found is %d\n",num);
    h=n-1;
    while(l<=h)
    {
        c++;
        if(l==h)
        {
            if(a[l]==num)
            {
                flag=-1;
                pos=l;
                break;
            }
            else 
                break;
        }
        else
        {
            int mid=(l+h)/2;
            if(a[mid]==num)
            {
                flag=-1;
                pos=mid;
                break;
            }
            else if(a[mid]>num)
                h=mid-1;
            else
                l=mid+1;
        }
    }
    if(flag==-1)
        printf("element found at pos %d and frequency is %d\n",pos,c);
    else
        printf("element not found and frequency is %d\n",c);
    return 0;
}