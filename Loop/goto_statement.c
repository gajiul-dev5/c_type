#include <stdio.h>

int main(){
  int i;
  i=1;
  gazi://label
  printf("%d\t",i);
  i++;
  if (i<8)
  {
    goto gazi;//label calling is here!
  }
  
  return 0;
}