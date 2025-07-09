#include <stdio.h>

int main(){
  int n,i;
  int arr[100];
  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);
  printf("Enter the elements of the array:\n"); 

  for(i = 0; i < n; i++){
    scanf("%d", &arr[i]);
  }
  int max= arr[0];
  for(i = 1; i < n; i++){
    if(arr[i] > max){
      max = arr[i];
    }
  }
  printf("The maximum value in the array is: %d\n", max);
  return 0;
}