#include <stdio.h>

int main(){
    
    int arr[9] = {299, 399, 499, 599, 699, 799, 899, 999, 99999};
    int arr_people[9]={0,0,0,0,0,0,0,0,0};
    int salary, sales, counter=1;
    
    printf("Enter the total sales of %d sales person (to exit write -1): ", counter);
    scanf("%d", &sales);
    
    while (sales != -1) {
        counter++;
        for (int i=0; i<9; i++) {
            salary = sales*0.09 + 200;
            
            if(salary <= arr[i]){
                arr_people[i]+=1;
                break;
            }
        }
        printf("Enter the total sales of %d. sales person (to exit write -1): ", counter);
        scanf("%d", &sales);
    }
    printf("\nSalespeople earned salaries is in the following range: \n\n");
    printf("a) $200–299: %d\n", arr_people[0]);
    printf("b) $300–399: %d\n", arr_people[1]);
    printf("c) $400–499: %d\n", arr_people[2]);
    printf("d) $500–599: %d\n", arr_people[3]);
    printf("e) $600–699: %d\n", arr_people[4]);
    printf("f) $700–799: %d\n", arr_people[5]);
    printf("g) $800–899: %d\n", arr_people[6]);
    printf("h) $900–999: %d\n", arr_people[7]);
    printf("i) $1000 and over: %d\n", arr_people[8]);
    
    return 0;
}
