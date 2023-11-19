#include <stdio.h>

int main(){
    int sum=0;
    for(int i=2; i<=30 ; i++){
        if(i % 2 == 0)
            sum += i;
        
    }
    printf("Sum of all even numbers from 1 to 30 is: %d\n", sum);
    return 0;
    
    }
