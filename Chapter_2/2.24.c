#include <stdio.h>

int isEven(int num){
    return num % 2 == 0;
}


int main(){
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    if (isEven(num))
        printf("Number is even.\n");
    else
        printf("Number is odd.\n");
        
    
    return 0;
}
