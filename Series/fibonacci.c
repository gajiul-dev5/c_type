 #include<stdio.h>
int main()
{
    int fibo,count=0,first=0,second=1,n;
    printf("Enter the Range: ");
    scanf("%d",&n);
    while(count<n){
        if(count<=1){
            fibo=count;
        }
        else{
            fibo=first+second;
            first=second;
            second=fibo;
        }
        printf("%d ",fibo);
        count++;
    }
   return 0;
}
