#include <stdio.h>

int main() {
    int num = 0 ;
    printf( "Enter Number: " ), scanf( "%d", &num ) ;
    int row = num, col = num ;
    for ( int r = 0 ; r < row ; r++ ) {
        for ( int c = 0 ; c < col ; c++ ) {
            if ( num % 2 == 0 ) {
                if ( c == r ) {
                    printf( "1 " ) ;
                } else {
                    printf( "0 " ) ;
                }
            } else {
                if ( c == col - ( r + 1 ) ) {
                    printf( "1 " ) ;
                } else {
                    printf( "0 " ) ;
                }
            }
        }
        printf( "\n" ) ;
    }
    return 0 ;
}
