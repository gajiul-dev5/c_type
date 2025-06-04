#include <stdio.h>

int main(){
  int num,temp,fact,i,rem,sum=0;
  printf("Enter a integer number: ");
  scanf("%d",&num);
  temp= num;
  while (temp!=0)
  {
    rem=temp%10;
    fact=1;
    for ( i = 1; i <=rem; i++)
    {
      fact=fact*i;
    }
    sum=sum+fact;
    temp=temp/10;
  }
    if (sum==num)
    {
      printf("The number %d is STRONG NUMBER\n",num);
    }
    else{
      printf("The number %d is NOT STRONG NUMBER\n",num);
    }
  
  return 0;
}