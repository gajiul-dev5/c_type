// "open a door" if the user enters the correct code:
#include <stdio.h>

int main(){
  int a=1415;
  printf("Enter a password: ");
  scanf("%d",a);
  if(a==1415){
    printf("Open");
  }
  else{
    printf("The password is incorrrect! ");
  }
  return 0;
}