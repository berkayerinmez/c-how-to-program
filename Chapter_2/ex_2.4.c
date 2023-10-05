#include <stdio.h>

int main()
{
    int x, y, z;
    
    printf("Enter three integer: \n");
    scanf("%d %d %d", &x, &y, &z);
    
    printf("Your numbers are: %d, %d, %d\n", x, y, z);
    
    int result;
    
    result = x + y + z;
    
    printf("The product is: %d\n", result);
    
    return 0;
}
