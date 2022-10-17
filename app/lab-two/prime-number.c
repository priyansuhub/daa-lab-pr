#include <stdio.h>
#include <math.h>
 void prime_m1(int n)
 {
   int i, flag = 0,c=0;
   for (i = 2; i < n; ++i) 
  {
    c++;
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }
  if (flag == 0)
    printf("%d is a prime number frequency=%d\n", n,c);
  else
    printf("%d is not a prime number frequency=%d\n", n,c);
}

void prime_m2(int n)
 {
   int i, flag = 0,c=0;
  for (i = 2; i <=n/2; ++i) 
  {
    c++;
    if (n % i == 0) 
    {
      flag = 1;
      break;
    }
  }
  if (flag == 0)
    printf("%d is a prime number frequency=%d\n", n,c);
  else
    printf("%d is not a prime number frequency=%d\n", n,c);
}
void prime_m3(int n)
{
    int i,flag=0,c=0;
  for (i = 2; i <=sqrt(n); ++i) 
  {
    c++;
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }
  if (flag == 0)
    printf("%d is a prime number frequency=%d\n", n,c);
  else
    printf("%d is not a prime number frequency=%d\n", n,c);
}

int main() {
  int n;
  printf("Enter an integer greater than 1\n");
  scanf("%d", &n);
  prime_m1(n);
  prime_m2(n);
  prime_m3(n);
  return 0;
}