#include <stdio.h>

int main(){
    
    int num1, num2;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    if (num1 > num2)
        printf("%d is larger \n", num1);
    else if (num1 < num2)
        printf("%d is larger \n", num2);
    else
        printf("There numbers are equal.\n");
        
    
    return 0;
}
