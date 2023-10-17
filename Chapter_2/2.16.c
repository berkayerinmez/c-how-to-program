#include <stdio.h>

void sum (int num1, int num2){
    
    printf("sum is %d\n", num1 + num2);
}

void product (int num1, int num2){
    
    printf("product is %d\n", num1 * num2);
    
}

void difference (int num1, int num2){
    printf("difference is %d\n", num1 - num2);
}

void quotient(int num1, int num2){
    printf("quotient is %d\n", num1 / num2);
}

void remain ( int num1, int num2){
    printf("remainder is %d\n", num1 % num2);
}

int num1, num2;

int main(){
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    sum(num1,num2);
    product(num1, num2);
    quotient(num1, num2);
    remain(num1, num2);
    
    return 0;
}
