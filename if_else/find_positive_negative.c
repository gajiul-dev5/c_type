//find out if a number is positive or negative:
#include <stdio.h>

int main(){
  int A;
  printf("Enter a number: ");
  scanf("%d",&A);
  if (A>0)
  {
    printf("The number you enter is possitive\n");
  }
  else{
    printf("The number you entered is negative");
  }
  return 0;
}