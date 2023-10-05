#include <stdio.h>

int main()
{
    int a;
    
    printf("Enter an integer: \n");
    
    scanf("%d", &a );
    
    printf("Your number is: %d\n", a);
    
    if (a != 7)
    {
        printf("The number is not 7!\n");

    }
    
    printf("This is a C program\n");
    
    printf("This is a C\nprogram\n");
    
    printf("This\nis\nC\nprogram\n");
    
    printf( "This\tis\ta\tC\tprogram.\n" );
    
    return 0;
}
