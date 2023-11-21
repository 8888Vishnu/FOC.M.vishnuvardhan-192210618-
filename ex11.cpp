#include <stdio.h>
#include <math.h>

int main() {
    printf("Name: M.vishnuvardhan\n");
    printf("Reg No: 192210618\n\n");

    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    double sum = 0.0;

    for (int i = 1; i <= n; i++) {
        sum += pow(i, i);
    }

    printf("Sum of the series 1^1 + 2^2 + 3^3 + 4^4 + ... + %d^%d: %.0f\n", n, n, sum);

    return 0;
}

