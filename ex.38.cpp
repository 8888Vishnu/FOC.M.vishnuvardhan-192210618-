#include <stdio.h>

int main() {
    
    printf("M.vishnuvardhan\n");
    printf("Reg No: 192210618\n");

    
    double originalPrice, salePrice;

   
    printf("Enter the original price of the item: $");
    scanf("%lf", &originalPrice);

    
    printf("Day 1 (Monday): Sale Price: $%.2lf\n", originalPrice);

    for (int day = 2; day <= 5; ++day) {
        
        salePrice = 0.9 * originalPrice;  

        
        printf("Day %d: Sale Price: $%.2lf\n", day, salePrice);

       
        originalPrice = salePrice;
    }

    return 0;
}

