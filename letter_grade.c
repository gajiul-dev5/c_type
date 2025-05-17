#include <stdio.h>

int main(){
  float mark;
  printf("Enter your mark--->");
  scanf("%f",&mark);

  if (mark>100 && mark<0)
  {
    printf("Invalid typing!\n");
  }
  else if (mark<=100 && mark>=80)
  {
    printf("Congratulations! You got A+ \n");
  }
  else if (mark<=79 && mark>=70)
  {
    printf("Congratulations! You got A \n");
  }
  else if (mark<=69 && mark>=60)
  {
    printf("Congratulations! You got A- \n");
  }
  else if (mark<=59 && mark>=50)
  {
    printf("Congratulations! You got B \n");
  }
  else if (mark<=49 && mark>=40)
  {
    printf("Congratulations! You got c \n");
  }
  else if (mark<=39 && mark>=33)
  {
    printf("Congratulations! You got D \n");
  }
  
  else{
    printf("Sorry! You fail in the exam!\n");
  }

  return 0;
}