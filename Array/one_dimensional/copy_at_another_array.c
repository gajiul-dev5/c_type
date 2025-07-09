#include <stdio.h>

int main(){
  int i,n,arr1[100],arr2[100];
  printf("Enter the size of array: ");
  scanf("%d",&n);
  printf("Enter %d of element\n",n);
  // get array from user
  for ( i = 0; i < n; i++)
  {
    scanf("%d",&arr1[i]);
  }
// print array1
printf("Array1: ");
  for ( i = 0; i < n; i++)
  {
    printf("%d ",arr1[i]);
  }
  // copy to another array2
  for ( i = 0; i < n; i++)
  {
    arr2[i]=arr1[i];
  }
  // print the array2 value 
  printf("\nArray2: ");
  for ( i = 0; i < n; i++)
  {
    printf("%d ",arr2[i]);
  }
  
  return 0;
}