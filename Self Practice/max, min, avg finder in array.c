#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// max, min, avg veren fonskiyon yaz

void stats(int *arr, int size, int *max, int *min, int *avg){
    *max = arr[0];
    *min = arr[0];
    
    int sum = 0;
    
    for (int i = 0; i<size; i++) {
        if(*max < arr[i])
            *max = arr[i];
        if( *min > arr[i])
            *min = arr[i];
        sum += arr[i];
    }
    
    *avg = sum/size;
    
}

int main(void){
    int size = 5;
    srand((unsigned)time(NULL));
    int arr[size];
    for(int i=0; i<size; i++){
        arr[i] = rand()%10000;
    }
    
    int max, min, avg;
    for(int m = 0; m < size; m++){
        printf("%d ", arr[m]);
    }
    printf("\n\n\n\n");
    stats(&arr, size, &max, &min, &avg);
    
    printf("MAX:%d  MIN:%d   AVARAGE:%d\n\n", max, min, avg);
}
