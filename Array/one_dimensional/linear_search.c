#include <stdio.h>

int main(){
  int i,value,pos=-1,arr[]={10,20,30,40,50,60,70,80,90,100};
  printf("Enter the value you want to search: ");
  scanf("%d",&value);
  for ( i = 0; i < 11; i++)
  {
    if (value==arr[i])
    {
     pos=i+1;
     break;
    }
    
  }
  if (value==-1)
  {
    printf("Item is not found\n");
  }
  else{
    printf("The number %d position at %d\n",value,pos);
  }
  
  
  return 0;
}