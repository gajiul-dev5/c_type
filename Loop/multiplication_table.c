#include <stdio.h>

int main(){
  while(1)//true ! 
  {
  int num,i;
  printf("Enter any number: ");
  scanf("%d",&num);

  for ( i = 1; i <=10; i++)
  {
   printf("%d X %d = %d\n",num,i,num*i);
  }
}

  return 0;
}