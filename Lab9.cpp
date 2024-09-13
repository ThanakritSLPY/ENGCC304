#include <stdio.h>

int main() {
    int num, temp_num = 0 ;
    char unk = '#' ;

    // Input number
    printf( "Enter Number: " ) ;
    scanf( "%d", &num ) ;

    // Declare array
    int array[num] ;

    // Input number into array
    for ( int i = 0 ; i < num ; i++ ) {
        printf( "Enter Value [%d]: ", i ) ;
        scanf( "%d", &array[i] ) ;
    } // End For (Input number to array)
    printf( "\n" ) ;

    // Print Index number
    printf( "Index: " ) ;
    for ( int k = 0 ; k < num ; k++ ) {
        printf( " %2d", k ) ;
    } // End For (Show index number)
    printf( "\n" ) ;

    // Prime Number Checker within array
    printf( "Array: " ) ;
    for ( int j = 0 ; j < num ; j++ ) {
        for ( int l = 2 ; l <= array[j] / 2 ; l++ ) {
            if ( array[j] % 2 == 0 ) {
                temp_num++ ;
                break ;
            } // End If (Check number in array of divide itself)
        } // End For Loop (Entire Array)
        if ( temp_num == 0 && array[j] != 1 ) {
            printf( " %2d", array[j] ) ;
        }
        else {
            printf( " %2c", unk ) ;
        } // End If (Print # or Number)
        temp_num = 0 ;
    } // End For Loop (Prime Number Checker)

    // Return 0
    return 0 ;
} // End Program
