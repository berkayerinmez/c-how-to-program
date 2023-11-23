#include <stdio.h>

int func(int arr[], int size){
    int max1, max2, product=1;
    max1=arr[0];
    max2=arr[1];
    if(max1<max2){
        max1=max2;
        max2=arr[0];
    }
    int i=2;
    while(i<size) {
        if(max1<arr[i])
            max1=arr[i];
        i++;
    }    
    arr[i-1]=0; 
    for (int k=0; k<size; k++) {
        if(max2<arr[k])
            max2=arr[k];
    }
    product = max1* max2;
    return product;
}

int main() {
    int arr[5]={6,2,3,4,10};
    printf("%d\n", func(arr, 5));
    return func(arr, 5);
}
