#include <stdio.h>
int root(int n)
{
 for(int i=1;i<=n/2;i++)
	if(i*i==n)
        return i;
    else if((i*i)>n)
        return i-1;
}
int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
    int s=root(n);
	printf("Approximate sqrt(%d): %d\n", n,s);
}