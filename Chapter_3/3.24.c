int main(){
    
    int arr[10], largest = 0;
    
    int i=0, counter=1;
    printf("Counter: %d\n", counter);
    printf("Number: ");
    scanf("%d", &arr[i]);
    largest = arr[i];
    while (i<=8){
        if(i>=1) {
            if (largest <= arr[i]) {
                largest = arr[i];
        }
        
        }
        printf("Largest: %d\n\n\n", largest);
        i++;
        counter++;
        printf("Counter: %d\n", counter);
        printf("Number: ");
        scanf("%d", &arr[i]);
    }
    printf("Largest: %d\n", largest);

    return 0;
    }
