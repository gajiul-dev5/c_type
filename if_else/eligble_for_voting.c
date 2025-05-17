// old enough to vote
#include <stdio.h>

int main(){
  int age;
  printf("Enter your age= ");
  scanf("%d",&age);
  if(age>=18){
    printf("You are eligble for votting!\n");
  }
  else{
    printf("Your are not eligble for vottnig!\n");
  }
  return 0;
}