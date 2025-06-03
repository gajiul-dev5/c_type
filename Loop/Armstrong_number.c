//Armstrong number 
#include <stdio.h>

int main(){
  int num,temp,sum,rem;
  printf("Enter a digit: ");
  scanf("%d",&num);
  temp=num;
  while (temp!=0) 
  {
   rem= temp%10;
   sum= sum+rem*rem*rem;
   temp=temp/10;
  }
  printf("The reverse number is:%d\n",sum);
  
  return 0;
}