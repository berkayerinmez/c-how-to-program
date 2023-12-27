#include <stdio.h>
#include <stdlib.h>

double fibon( int b){
    double f2= 1;
    double f1= 0;
    double i = 2;
    double new = 0;
    if(b == 0)
        return 0;
    else if (b == 1)
        return 1;
    while (i<=b){
        new = f1 + f2;
        i++;
        f1= f2;
        f2 = new;
    }
    return new;
    
}

int main(){
    printf( "%0.f\n", fibon(19));   
}
