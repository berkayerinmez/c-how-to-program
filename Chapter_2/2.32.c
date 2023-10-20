#include <stdio.h>

float bmi(float weight, float height){
    return weight/(height*height);
}

int main(){
    float weight, height, underweight, normal, overweight;
    underweight = 18.5;
    normal = 24.9;
    overweight = 29.9;
    
    printf("Enter your weight in kg and your height in meter: ");
    scanf("%f %f", &weight, &height);
    
    if (bmi(weight, height) <= underweight)
        printf("You are underweight: %.2f\n", bmi(weight, height));
    else if (bmi(weight, height) <= normal)
        printf("You are normal: %.2f\n", bmi(weight, height));
    else if (bmi(weight, height) <= overweight)
        printf("You are overweight: %.2f\n", bmi(weight, height));
    else
        printf("You are OBESE: %.2f\n", bmi(weight, height));
    
    return 0;
    
}
