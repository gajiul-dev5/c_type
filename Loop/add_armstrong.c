//Armstrong number 
#include <stdio.h>

int main(){
  int i,initnum,finalnum,temp,sum,rem;
  printf("Enter innitial number: ");
  scanf("%d",&initnum);

  printf("Enter final number: ");
  scanf("%d",&finalnum);

  for ( i = initnum; i < finalnum; i++)
  {
    temp=i;
  while (temp!=0) 
  {
   rem= temp%10;
   sum= sum+rem*rem*rem;
   temp=temp/10;
  }
  if (sum==i)
  {
    printf("%d\n",i);
  
  }
  sum=0;
  
  }
  

  
  return 0;
}