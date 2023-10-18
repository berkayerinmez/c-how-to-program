#include <stdio.h>

int main(){
    
    float num;
    const float pi = 3.14159;
    printf("Enter the radius: ");
    scanf("%f", &num);
    
    printf("Circle diameter is %.3f\n", num * 2);
    printf("Circle circumference is %.3f\n", num * pi * 2);
    printf("Circle area is %.3f\n", num * num * pi);
    
    return 0;
}
