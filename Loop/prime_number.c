#include<stdio.h>
int main(){
  int num,i,count=0;
  printf("Enter any number: ");
  scanf("%d",&num);
  for ( i = 2; i < num; i++)
  {
   if (num%i==0)
   {
    count ++;
    break;
   }
  }
   if (count==0)
   {
    printf("This is Prime number\n");
   }
   else{
    printf("This is Not Prime number\n");

   }




  return 0;
}
