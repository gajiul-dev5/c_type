/**
 * C program to find power of any number using for loop
 */

#include <stdio.h>

int main()
{
    int base, exponent;
    long long power = 1;
    int i;

    /* Input base and exponent from user */
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    /* Multiply base, exponent times*/
    for(i=1; i<=exponent; i++)
    {
        power = power * base;
    }

    printf("%d ^ %d = %lld", base, exponent, power);

    return 0;
}