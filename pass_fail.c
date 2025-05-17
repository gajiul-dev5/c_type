#include <stdio.h>

int main(){
  float mark;
  printf("Enter your mark= ");
  scanf("%f",&mark);

  if (mark>=33)
  {
    printf("Congratulations! You pass in the exam!\n");
  }
  else{
    printf("Sorry! You fail in the exam!\n");
  }
  
  return 0;
}