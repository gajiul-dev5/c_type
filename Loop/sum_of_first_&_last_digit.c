#include <stdio.h>
#include<math.h>

int main(){
  int first,last,count,num;
  printf("Enter your number: ");
  scanf("%d",&num);
  count=log10(num);

  first=num/pow(10,count);
  last=num%10;
  
  printf("Sum Of first and last Number=%d\n",first+last);

  return 0;
}