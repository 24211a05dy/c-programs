
#include <stdio.h>
int sod(int n);
int main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    printf("sum of digits of %d is %d",n,sod(n));
    return 0;
}
int sod(int n){
    if(n==0)
    return 0;
    else 
    return((n%10)+sod(n/10));
}
