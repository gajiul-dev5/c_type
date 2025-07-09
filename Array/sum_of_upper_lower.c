#include <stdio.h>

int main()
{
  int A[3][3], i, j, sum = 0,up,low;

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
      if (i > j)
      {
        low= low + A[i][j];
        
      }
      if (i<j)
      {
        up= up + A[i][j];
        
      }
      
    }
    printf("\n");
  }
  printf("Sum of upper elements of A matrix= %d\n", up);
  printf("Sum of lower elements of A matrix= %d\n", low);
  return 0;
}