#include <stdio.h>

int main()
{
  int i, j, sum = 0, rowA, colA, rowB, colB;
  int a[30][30], b[30][30], m[30][30];

  // for input row column at matrix A
  printf("Enter row and column for A matrix: ");
  scanf("%d %d", &rowA, &colA);

  // for input row column at matrix B
  printf("Enter row and column for B matrix: ");
  scanf("%d %d", &rowB, &colB);
  while (colA != rowB)
  {
    printf("Erorr!! column of first matrix not equal to row of second\n");

    printf("Enter row and column for A matrix: ");
    scanf("%d %d", &rowA, &colA);

    printf("Enter row and column for B matrix: ");
    scanf("%d %d", &rowB, &colB);
  }

  // for A matrix input
  printf("Enter the value of matrix A: \n");
  for (i = 0; i < rowA; i++)
  {
    for (j = 0; j < colA; j++)
    {
      printf("A[%d][%d]= ", i, j);
      scanf("%d", &a[i][j]);
    }
    printf("\n");
  }
  // for B matrix input
  printf("Enter the value of matrix B: \n");
  for (i = 0; i < rowB; i++)
  {
    for (j = 0; j < colB; j++)
    {
      printf("B[%d][%d]= ", i, j);
      scanf("%d", &b[i][j]);
    }
    printf("\n");
  }
  // printing A matrix
  printf("A= ");
  for (i = 0; i < rowA; i++)
  {
    for (j = 0; j < colA; j++)
    {
      printf("\t");
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
  // for printing B matrix
  printf("\nB= ");
  for (i = 0; i < rowB; i++)
  {
    for (j = 0; j < colB; j++)
    {
      printf("\t");
      printf("%d ", b[i][j]);
    }
    printf("\n");
    
  }
  // calculation of multiplication
  for (i = 0; i < rowA; i++)
  {
    for (j = 0; j < colB; j++)
    {
      for (int k = 0; k <colA ; k++)
      {
       sum= sum + a[i][k]*b[k][j];
     
      }
       m[i][j]=sum;
       sum=0;
    }
    printf("\n");
    
  }
  // for result
  printf("\nA*B= ");
  for (i = 0; i < rowA; i++)
  {
    for (j = 0; j < colB; j++)
    {
      printf("\t");
      printf("%d ", m[i][j]);
    }
    printf("\n");
    
  }

  return 0;
}