#include <stdio.h>
#include <stdlib.h>

int main(){
    int product=0, quan;
    double tot_retail_value=0;
    printf("Which product do you want to chose to exit write -1: ");
    scanf("%d", &product);
    
    while(product != -1) {
        printf("Quantity sold for one day: ");
        scanf("%d", &quan);
        switch (product) {
            case 1:
                tot_retail_value += 2.98 * quan;
                break;
            case 2:
                tot_retail_value += 4.50 * quan;
                break;
            case 3:
                tot_retail_value += 9.98 * quan;
                break;
            case 4:
                tot_retail_value += 4.49 * quan;
                break;
            case 5:
                tot_retail_value += 6.87 * quan;
                break;
        }
        
        printf("Which product do you want to chose to exit write -1: ");
        scanf("%d", &product);
    }
    printf("Total retail is: %.2lf\n", tot_retail_value);
    
    return 0;
}
