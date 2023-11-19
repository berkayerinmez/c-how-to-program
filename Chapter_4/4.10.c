#include <stdio.h>

int main(){

    double value=0, sum=0, counter=0;
    
    while(value !=9999){
        sum += value;
        printf("Enter  %.lf. number - ", counter+1);
        scanf("%lf", &value);
        counter++;
    }
    printf("sum is %.2lf \n", sum/(counter-1));
    return 0;
    }
