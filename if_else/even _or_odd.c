//Find out if a number is even or odd:
#include <stdio.h>

int main(){
  int A;
  printf("Enter an integer number: ");
  scanf("%d",&A);
  if(A%2==0){
    printf("The number you enter is even\n");
  }
  else{
   printf("The number you enter is odd\n");
  }
  return 0;
}