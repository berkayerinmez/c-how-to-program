#include <stdio.h>
#include <stdlib.h>

double retail_Price(int product, int quan){
    double total;
    switch (product) {
        case 1:
            total = 2.98 * (double)quan;
            break;
        case 2:
            total = 4.50 * (double)quan;
            break;
        case 3:
            total = 9.98 * (double)quan;
            break;
        case 4:
            total = 4.49 * (double)quan;
            break;
        case 5:
            total = 6.87 * (double)quan;
            break;
    }
    return total;
}


int main(){
    printf("Product number          Retail price\n");
    printf("1                       $ 2.98\n");
    printf("2                       $ 4.50\n");
    printf("3                       $ 9.98\n");
    printf("4                       $ 4.49\n");
    printf("5                       $ 6.87\n\n");
    double product=0, quan;
    double tot_retail_value=0;
    printf("Which product do you want to chose to exit write -1: ");
    scanf("%lf", &product);
    
    while(product != -1) {
        printf("Quantity sold for one day: ");
        scanf("%lf", &quan);
        tot_retail_value += retail_Price(product, quan);
        
        printf("Which product do you want to chose to exit write -1: ");
        scanf("%lf", &product);
        
    }
    printf("Total retail value of all products sold last week: %.2lf\n", tot_retail_value);
    
    return 0;
}
