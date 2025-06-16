#include <stdio.h>

int main(){
 int i,result=1,n;
printf("Enter n= ");
scanf("%d",&n);
printf("2X4X6X.....%d",n);
for ( i = 1; i <=n; i=i+2)
{
  result=result*i;

}
printf("=%d",result);


  return 0;
}