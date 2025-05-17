#include <stdio.h>

int main(){
  int option;
  float f;
  float c;
  printf("chose your option\n");
  printf("1.Fahrenheit to Celsius\n");
  printf("2.Celsius to Fahrenheit\n");
  scanf("%d",&option);
  switch (option)
  {
  case 1:
    printf("Enter your farhenheit temperature: ");
    scanf("%f",&f);
    printf("Here is the celsius temperature:%.2f\n",(f - 32) * 5 / 9);
    break;
  case 2:
    printf("Enter your celsius temperature: ");
    scanf("%f",&c);
    printf("Here is the celsius temperature:%.2f\n",( c * 9 / 5) + 32);
    break;
  
  default:
          printf("Not a correct option");
    
  }

  return 0;
}