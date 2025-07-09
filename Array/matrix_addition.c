#include <stdio.h>

int main()
{
  int A[100][100], B[100][100], sum[100][100], i, row, col, j;
  printf("Enter the size of row and column: ");
  scanf("%d %d", &row, &col);
  // input matrix A
  printf("Enter the array elements of matrix A: ");
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      printf("A[%d][%d]=", i, j);
      scanf("%d", &A[i][j]);
    }
    printf("\n");
  }
  // input matrix B
  printf("Enter the array elements of matrix B: ");
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      printf("A[%d][%d]=", i, j);
      scanf("%d", &B[i][j]);
    }
    printf("\n");
  }
  // printing matrix A and B
  printf("A= ");
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      printf("\t");
      printf("%d ", A[i][j]);
    }
    printf("\n");
  }
  printf("\nB= ");
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      printf("\t");
      printf("%d ", B[i][j]);
    }
    printf("\n");
  }
  // sum of array matrix

  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      sum[i][j] = A[i][j] + B[i][j];
    }
    printf("\n");
  }
  printf("A+B= ");
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      printf("\t");
      printf("%d ", sum[i][j]);
    }
    printf("\n");
  }

  return 0;
}