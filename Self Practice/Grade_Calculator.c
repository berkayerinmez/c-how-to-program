#include <stdio.h>

void gradeCalculator(int num){
    if(num>=90)
        printf("Your letter grade is A\n");
    else if(num>=80)
        printf("Your letter grade is B\n");
    else if (num>=70)
        printf("Your letter grade is C\n");
    else if (num>=60)
        printf("Your letter grade is D\n");
    else
        printf("Your letter grade is F\n");

}
int main(){
    int grade;
    printf("Enter your grade: ");
    scanf("%d", &grade);
    gradeCalculator(grade);
    }
