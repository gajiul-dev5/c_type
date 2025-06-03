#include <stdio.h>

int main() {
    int n1, n2, num1, num2, rem, gcd, lcm;

    printf("Enter two integer numbers: ");
    scanf("%d %d", &num1, &num2);

    // Backup for LCM calculation later
    n1 = num1;
    n2 = num2;

    // GCD calculation using Euclidean Algorithm
    while (n2 != 0) {
        rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }

    gcd = n1;
    lcm = (num1 * num2) / gcd;

    printf("GCD = %d\n", gcd);
    printf("LCM = %d\n", lcm);

    return 0;
}
