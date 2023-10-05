#include <stdio.h>

int main()
{
    printf( "The value is %d\n", &number ); /* number is not defined*/
    
    scanf( "%d%d", &number1, number2 );/* & is not written in number2 */
    
    if(c<7);{ /* when we write conditions we dont use semi colomn (;) */
    printf( "C is less than 7\n" ); }
    
    if ( c => 7 ) { /* the correct way is ">=" */
    printf( "C is equal to or less than 7\n" );
    }

}
