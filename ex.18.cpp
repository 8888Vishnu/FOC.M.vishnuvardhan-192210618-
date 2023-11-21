#include <stdio.h>

int main() {
    printf("Name: M.vishnuvardhan\n");
    printf("Reg No: 192210618\n\n");

    int num, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

   
    while (num != 0) {
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }

    printf("Sum of the digits: %d\n", sum);

    return 0;
}

