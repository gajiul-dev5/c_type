#include <stdio.h>

int main()
{
  int i, n, arr[100];
  printf("Enter the size of array: ");
  scanf("%d", &n);
  arr[0] = 0;
  arr[1] = 1;
  printf("\n");
  for (i = 2; i < n; i++)
  {
    arr[i] = arr[i - 1] + arr[i - 2];
  }
  for (i = 0; i < n; i++){
     printf("%d\n",arr[i]);
  }

  return 0;
}