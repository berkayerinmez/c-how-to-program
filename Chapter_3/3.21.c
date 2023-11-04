#include <stdio.h>

void salary(float hours, float rate){
    float extra_Hours;
    if (hours <= 40)
        printf("Salary is $%.2f\n", hours * rate);
    else {
        extra_Hours = hours - 40;
        hours = 40;
        printf("Salary is $%.2f\n", hours * rate + extra_Hours * 1.5 * rate);
    }
}

int main(){
    
    float hours_Worked, hourly_Rate;
    
    while(hours_Worked != -1){
        printf("Enter # of hours worked (-1 to end): ");
        scanf("%f", &hours_Worked);
        if(hours_Worked == -1)
            break;
        printf("Enter hourly rate of the worker ($00.00): ");
        scanf("%f", &hourly_Rate);
        
        salary(hours_Worked, hourly_Rate);
    }
    
    return 0;
}
