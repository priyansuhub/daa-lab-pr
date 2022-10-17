#include <stdio.h>
int f_count = 0 ;
int gcd_e( int a , int b )
{
    f_count++;
    if(a==0)
        return b;
    else
        return gcd_e( b%a , a );
}
int gcd_cic( int a , int b )
{
    int q = a<b?a:b;
    while(!((a%q==0)&&(b%q==0)))
    {
        q-- ;
        f_count++;
    }
    return q ;
}
int gcd_msp( int a , int b )
{
    int dividend = a>b?a:b;
    int divisor = a<b?a:b;
    int rem = -1;
    while(rem!=0)
    {
        f_count ++ ;
        rem = dividend%divisor;
        dividend = divisor ;
        if(rem!= 0)
            divisor = rem ;
    }
    return divisor;  
}
int main()
{
    int i,g1,g2,g3;
    int arr[6][2]={{31415,14142},{56,32566},{34218,56},{12,15},{31415,31415},{12,12}};
    for(i=0;i<6;i++)
    {
        f_count = 0 ;
        g1 = gcd_e(arr[i][0],arr[i][1]) ;
        printf("\nGCD euclid of %d and %d = %d\tFrequency Count : %d\n\n",arr[i][0],arr[i][1],g1,f_count);
        f_count = 0 ;
        g2 = gcd_cic(arr[i][0],arr[i][1]) ;
        printf("\nGCD consecutive of %d and %d = %d\tFrequency Count : %d\n\n",arr[i][0],arr[i][1], g2 , f_count);
        f_count = 0 ;
        g3 = gcd_msp(arr[i][0],arr[i][1]) ;
        printf("\nGCD middle of %d and %d = %d\tFrequency Count : %d\n\n",arr[i][0],arr[i][1], g3 , f_count);
    }
    
    return 0;
}