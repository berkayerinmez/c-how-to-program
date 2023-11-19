#include <stdio.h>

int main(){
    int product=1;
    for(int i=1; i<=15 ; i++){
        if(i % 2 != 0)
            product *= i;
        
    }
    printf("Product of all odd numbers from 1 to 15 is: %d\n", product);
    return 0;
    
    }
