#include <stdio.h>
int main()
{
    int luca, count = 0, first = 2, second = 1, n;
    printf("Enter the Range: ");
    scanf("%d", &n);

    while (count < n) {
        if (count == 0) {
            luca = first;
        } else if (count == 1) {
            luca = second;
        } else {
            luca = first + second;
            first = second;
            second = luca;
        }
        printf("%d ", luca);
        count++;
    }

    return 0;
}
