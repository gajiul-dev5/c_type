#include <stdio.h>

int main()
{
  int A[3][3], trans[3][3], i, j;

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
      printf("\t");
      trans[j][i] = A[i][j];
    }
    printf("\n");
  }
  printf("Transpose matrix= \n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {

      printf("%d ", trans[i][j]);
    }
    printf("\n");
  }

  return 0;
}