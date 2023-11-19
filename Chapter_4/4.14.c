#include <stdio.h>
#include <stdlib.h>

int main(){
   
    int a=1, count=1;
    printf("factorial of 5 is: \n");
    for(int i =1; i<=5; i++){
        a = a*i;
        printf("%d      %d\n", count, a);
        count++;
    }
    
    
    return 0;
}
