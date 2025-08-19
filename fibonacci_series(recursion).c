
#include <stdio.h>
int fib(int n);
int main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    if(n<=0){
        printf(" invalid input , n must be >= 1");
    }
    else if(n==1){
        printf("fibonacci series up to 1 term :\n");
        printf("0\n");
    }
    else{
        
        printf("fibonacci series up to %d terms :\n",n);
        for(int i=0;i<n;i++){
            printf("%d ",fib(i));
        }
        printf("\n");
    }
    return 0;
}
int fib(int n){
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else 
    return fib(n-1)+fib(n-2);
}
