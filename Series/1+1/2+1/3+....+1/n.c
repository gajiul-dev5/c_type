#include <stdio.h>

int main(){
  double i, n, sum = 0;
  printf("Enter n= ");
  scanf("%lf", &n);

  printf("\n");
  for (i = 1; i <= n; i++) {
    sum += 1/i;

    if (i == 1)
      printf("1/%.0lf", i);
    else
      printf(" + 1/%.0lf", i);
  }

  printf(" = %.2lf\n", sum);
  return 0;
}
