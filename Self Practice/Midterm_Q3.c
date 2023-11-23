#include <stdio.h>

int func(int n, int m){
    int sum=0;
    while (n<m) {
        n++;
        if(n==m)
            break;
        if(n%2==0)
            sum+= n;
    }
    while (m<n) {
        m++;
        if(m==n)
            break;
        if(m%2==0)
            sum += m;
    }
    return sum;
}

int main(){
    return func(4,3);
}
