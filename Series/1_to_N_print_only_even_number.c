 //2+4+6+.....n=sum
 #include <stdio.h>
 
 int main(){
  int num,i,sum=0;
  printf("Enter n= ");
  scanf("%d",&num);
   printf("2+4+6+....%d",num);
  for ( i = 2; i <=num; i=i+2)
  {
   
    sum=sum+i;

  }
  printf("=%d",sum);
  return 0;
 }