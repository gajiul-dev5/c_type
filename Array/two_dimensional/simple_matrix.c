#include <stdio.h>

int main(){
  int a[3][4],b[3][4];
  printf("Enter the elements of a matrix: ");
  for (int i = 0; i <3; i++)
  {
    for (int j = 0; j <4; j++)
    {
      printf("a[%d][%d]= ",i,j);
      scanf("%d",&a[i][j]);
    }
    printf("\n");
  }
  printf("A = ");
  for ( int i = 0; i <3; i++)
  {
    for (int j = 0; j <4; j++)
    {
        printf("\t");
      printf("%d ",a[i][j]);
    }
    printf("\n");
  }
   printf("\n\nEnter the elements of b matrix: ");
  for (int i = 0; i <3; i++)
  {
    for (int j = 0; j <4; j++)
    {
      printf("b[%d][%d]= ",i,j);
      scanf("%d",&b[i][j]);
    }
    printf("\n");
  }
  printf("B = ");
  for ( int i = 0; i <3; i++)
  {
    for (int j = 0; j <4; j++)
    {
        printf("\t");
      printf("%d ",b[i][j]);
    }
    printf("\n");
  }
  
  
  
  return 0;
}