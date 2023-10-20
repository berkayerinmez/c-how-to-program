#include <stdio.h>

int square(int num){
    return num * num;
}

int cube(int num){
    return num * num * num;
}

int main(){
    int i;
    printf("number  square  cube\n");
    for (i=0; i<=10; i++) {
        
        printf("%d  %d  %d\n", i, square(i), cube(i) );
        
    }
    
    
    return 0;
}
