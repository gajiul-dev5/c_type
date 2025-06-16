#include <stdio.h>

int main(){
  int first,last,count,num;
  printf("Enter you number: ");
  scanf("%d",&num);
  count=log10(num);

  first=num/pow(10,count);
  last=num%10;
  printf("First Number=%d\n",first);
  printf("last Number=%d\n",last);

  return 0;
}