#include <stdio.h>

int main(){
  char ch;
  printf("Enter any charecter : ");
  scanf("%c",&ch);
  if (ch=='a' || ch== 'e' || ch=='i' || ch=='o' || ch=='u')
  {
    printf("the letter is vowel!\n");
  }
  else{
    printf("the letter is consonent");
  }
  
  return 0;
}