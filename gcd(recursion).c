#include <stdio.h>
int gcd(int a,int b);
int main()
{
    int a,b;
    printf("enter a and b values:");
    scanf("%d %d",&a,&b);
    printf("gcd of %d,%d is %d",a,b,gcd(a,b));
    return 0;
}
int gcd(int a, int b){
    if(a==b)
    return a;
    else if(a>b)
    return gcd(a-b,b);
    else
    return gcd(a,b-a);
}
