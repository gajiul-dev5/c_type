#include <stdio.h>

int main(){
  char ch;
  printf("Enter any charecter: ");
  scanf("%c",ch);
  if(ch>='a' && ch<='z'){
    printf("small letter!\n");

  }
  else if(ch<='A' && ch<='Z');
  {
    printf("capital letter!\n");
  }
  else{
    printf("no letter there");
  }
  
  return 0;
}