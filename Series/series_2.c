#include <stdio.h>

int main(){
  int a=1,sum=0,n;
  printf("Enter the last digit of series: ");
  scanf("%d",&n);
  printf("1+3+5+.......+%d",n);

  while (a<=n)
  {
    sum=sum+a;
    a=a+2;
  }
  printf("=%d",sum);

  
  return 0;
}