#include <stdio.h>

int main(){
  int num,temp,sum,rem;
  printf("Enter a digit: ");
  scanf("%d",&num);
  temp=num;
  while (temp!=0) 
  {
   rem= temp%10;
   sum= sum*10+rem;
   temp=temp/10;
  }
  if (num==sum)
  {
    printf("The number %d is palindrome\n",sum);
  }
  else{
    printf("The Number %d is Not palidrome\n",sum);
  }
  
 
  
  return 0;
}