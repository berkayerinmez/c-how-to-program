#include <stdio.h>

int main(){

    int a, value, sum=0, counter=0;
    printf("How many value do you want to enter: ");
    scanf("%d", &a);
    
    while(counter < a){
        printf("Enter the %d number - ", counter+1);
        scanf("%d", &value);
        sum += value;
        counter++;
    }
    printf("sum is %d \n", sum);
    return 0;
    
    }
