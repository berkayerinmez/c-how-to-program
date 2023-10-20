#include <stdio.h>

int main(){
    
    int num1;
    printf("Write a 5 digit integer: ");
    scanf("%d", &num1);
    
    printf("%d %d %d %d %d\n", num1/10000, num1/1000%10, num1/100%100%10, num1/10%1000%100%10, num1%10000%1000%100%10 );
    
    return 0;
}
