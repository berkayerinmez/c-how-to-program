#include <stdio.h>

int main()
{
    int x, y, z, result;
    
    printf("Enter 3 number:\n");
    
    scanf("%d%d%d", &x, &y, &z);
    
    result = x * y * z;
    
    printf("The product is: %d\n", result);
    
    return 0;
}
