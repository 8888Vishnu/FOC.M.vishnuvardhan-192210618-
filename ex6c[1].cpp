#include <stdio.h>

int main() {
    
    printf("Name: M.vishnuvardhan\n");
    printf("Reg No: 192210618\n\n");

    
    int n;

   
    printf("Enter the value of n: ");
    scanf("%d", &n);

    
    int sum = n * (n + 1);

    
    printf("Sum of the even number series 2 to %d: %d\n", n, sum);

    return 0;
}

