#include <stdio.h>

int main(){
    int num1, num2;
    
    printf("Enter two number: ");
    scanf("%d %d", &num1, &num2);
    
    printf("sum is %d \n", num1 + num2);
    printf("product is %d \n", num1 * num2);
    printf("difference is %d \n", num1 - num2);
    printf("quotient is %d \n", num1 / num2);
    printf("remainder is %d \n", num1 % num2);
    
    return 0;
}
