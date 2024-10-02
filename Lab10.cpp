#include <stdio.h>
#include <string.h>

int main() {
    char string[ 100 ], rev_string[ 100 ] ;

    printf( "Enter a word: " ) ;
    gets( string ) ;

    strcpy( rev_string, string ) ;
    strrev( rev_string ) ;

    printf( "%s\n", string ) ;
    printf( "%s\n", rev_string ) ;

    if ( strcmp( string, rev_string ) == 0 ) {
        printf( "Pass." ) ;
    }
    else {
        printf( "Not Pass." ) ;
    } // End If (Compare two string)

    return 0 ;
} // End Program
