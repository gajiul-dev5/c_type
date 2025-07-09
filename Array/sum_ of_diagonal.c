#include <stdio.h>

int main()
{
  int A[3][3], i, j, sum = 0;

  printf("Enter the elements of A matrix: ");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("A[%d][%d]= ", i, j);
      scanf("%d", &A[i][j]);
    }
    printf("\n");
  }
  printf("A= ");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("\t");
      printf("%d", A[i][j]);
    }
    printf("\n");
  }
  for (i = 0; i < 3; i++)
  {

    for (j = 0; j < 3; j++)
    {
      if (i == j)
      {
        sum = sum + A[i][j];
      }
    }
    printf("\n");
  }
  printf("Sum of diagonal elements of A matrix= %d\n", sum);
  return 0;
}