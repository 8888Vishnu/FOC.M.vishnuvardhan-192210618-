#include <stdio.h>

int main() {
    
    printf("Name: M.vishnuvardhan\n");
    printf("Reg No: 192210618\n\n");

  
    int n;

    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Odd Number Series 1 to %d:\n", n);

    
    for (int i = 1; i <= n; i += 2) {
        printf("%d ", i);
    }

    return 0;
}

