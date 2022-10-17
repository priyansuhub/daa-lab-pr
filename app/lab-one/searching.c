#include <stdio.h>
int main() 
{
    int a[20];
    int i,num,flag=1,n;
    scanf("%d",&n);
    printf("Enter the numbers\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the number to search");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(num == a[i])
        {
            flag=0;
            break;
        }
    }
    if(flag==0)
        printf("Number found at pos %d\n",i);
    else
        printf("Number is not present\n");

    return 0;
}