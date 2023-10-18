#include <stdio.h>

int main(){
    
    int num1, num2, num3, num4, num5, smallest, largest;
    
    printf("Enter 5 integer number: ");
    scanf("%d%d%d%d%d", &num1, &num2, &num3, &num4, &num5);
    
    smallest = num1;
    largest = num1;
    
    if (num2 < smallest)
        smallest = num2;
    if (num3 < smallest)
        smallest = num3;
    if (num4 < smallest)
        smallest = num3;
    if (num5 < smallest)
        smallest = num5;
    
    printf("Smallest number is %d\n", smallest);
    
    if (num2 > largest)
        largest = num2;
    if (num3 > largest)
        largest = num3;
    if (num4 > largest)
        largest = num4;
    if (num5 > largest)
        largest = num5;
    
    printf("Largest number is %d\n", largest);
    
    return 0;
}
