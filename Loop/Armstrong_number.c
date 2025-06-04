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
  if (sum==num)
  {
    printf("The number is armstrong\n");
  }
  else{
    printf("The number is not armstrong number\n");
  }
  
 
  
  return 0;
}