#include<stdio.h>
void toh(char src, char aux, char dst, int n);
void main(){
  int n;
  printf("Enter no of disks :"); 
  scanf("%d",&n);
  printf(" steps to solve tower of hanoi with %d disks :\n",n);
  toh('A','B','C',n);
}
void toh(char src, char aux, char dst, int n){
  if(n==0){
     return;
  }
  else{
    toh(src,dst,aux,n-1);
    printf("Move %d disk from %c --> %c\n",n,src,dst);
    toh(aux,src,dst,n-1);
  }
}

