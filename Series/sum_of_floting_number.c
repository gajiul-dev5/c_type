#include<stdio.h>
int main()
{
    float i,sum=0,n;
    printf("Enter n: ");
    scanf("%f",&n);
    for(i=1.5;i<=n;i++){
        
        sum=sum+i;
        
    }
    printf("1.5+2.5+3.5+.....%.2f",n);
    printf("=%.2f\n",sum);
    
    return 0;
}