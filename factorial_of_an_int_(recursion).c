#include<stdio.h>
int factorial_of_integer(int n);
void main(){
  int a,fact=0;
  printf("Enter a value :"); 
  scanf("%d",&a);
  fact=factorial_of_integer(a);
  printf("factorial of %d is %d",a,fact);
}
int factorial_of_integer(int n){
    if(n==0)
    return 1;
    else 
    return n*factorial_of_integer(n-1);
}
