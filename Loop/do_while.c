#include <stdio.h>

int main()
{
  int i = 0; // initialization expression
  do
  {
    printf("C programming\n", i); // update expression
    i++;
  } while (i <= 10); // apply condition

  return 0;
}