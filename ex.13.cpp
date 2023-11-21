#include <stdio.h>

int main() {
    printf("Name: M.vishnuvardhan\n");
    printf("Reg No: 192210618\n\n");

    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i * i * i;
    }

    printf("Sum of the cubes of numbers 1^3 + 2^3 + 3^3 + ... + %d^3: %d\n", n, sum);

    return 0;
}

