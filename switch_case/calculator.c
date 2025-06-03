#include <stdio.h>

int main(){
  int c;
  float num1,num2;

  printf("1.Addition(+)\n");
  printf("2.Substraction(-)\n");
  printf("3.Multiplication(*)\n");
  printf("4.Division(/)\n");
  printf("Enter your choise\n");
  scanf("%d",&c);
  switch (c)
  {
  case 1:
  printf("Enter two number: ");
  scanf("%f %f",&num1,&num2);
  printf("The addition of %.3f & %.3f is= %.3f\n",num1,num2,num1+num2);
    break;
  case 2:
  printf("Enter two number: ");
  scanf("%f %f",&num1,&num2);
  printf("The addition of %.3f & %.3f is= %.3f\n",num1,num2,num1-num2);
    break;
  case 3:
  printf("Enter two number: ");
  scanf("%f %f",&num1,&num2);
  printf("The Multiplication of %.3f & %.3f is= %.3f\n",num1,num2,num1*num2);
    break;
  case 4:
  printf("Enter two number: ");
  scanf("%f %f",&num1,&num2);
  printf("The  of %.3f & %.3f is= %.3f\n",num1,num2,num1/num2);
    break;

  default:
  printf("Not correct option!\n");

  }
  return 0;
}
