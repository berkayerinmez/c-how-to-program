#include <stdio.h>

int main(){
    
    int a, smallest=1, value, count=1;
    
    printf("How many value you want to enter: ");
    scanf("%d", &a);
    printf("Enter %d value: ", count);
    scanf("%d", &value);
    smallest=value;
    count++;
    while(count<=a){
        printf("Enter %d value: ", count);
        scanf("%d", &value);
        if(value<smallest)
            smallest=value;
        count++;
    }
    printf("%d\n", smallest);
    return 0;
    
    }
