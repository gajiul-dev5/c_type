#include <stdio.h>

int main(){
  int n,sum=0,i;
  printf("Enter n= ");
  scanf("%d",&n);;
  printf("1^2+2^2+3^2+......+%d",n);

  for ( i = 1; i <=n; i++)
  {
    sum=sum+i*i;

  }
  printf("=%d",sum);
  
  return 0;
}