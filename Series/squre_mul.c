#include <stdio.h>

int main(){
 int i,result=1,n;
printf("Enter n= ");
scanf("%d",&n);
printf("1^2X2^2X3^2.....X%d^2",n);
for ( i = 1; i <=n; i++)
{
  result=result*i*i;

}
printf("=%d",result);


  return 0;
}