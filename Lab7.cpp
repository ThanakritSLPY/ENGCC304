#include <stdio.h>
#include <time.h> // Time Library
#include <stdlib.h> // C Extention Library

int main() {
    int num, rand_num, restart = 0, score = 100, indi1 = 1, indi2 = 100 ;

    // Random Number
    srand( time(NULL) ) ;
    rand_num = rand() % 100 + 1 ;

    // First Time Playing
    printf( "Do you want to play a game? (1 = Yes / -1 = No): " ) ;
    scanf( "%d", &restart ) ;
    // printf( "Random Number: %d\n", rand_num ) ;

    // Predict Number Program
    while ( restart == 1 ) {
        while ( score > 0 ) {
            printf( "\nGuess the winning number (%d - %d): ", indi1, indi2 ) ;
            scanf( "%d", &num ) ;
            if ( num != rand_num ) {
                if ( num > rand_num ) {
                    score = score - 10 ;
                    printf( "Sorry, the winning number is LOWER than %d. (Score = %d)\n", num, score ) ;
                    if ( indi2 > num - 1 ) {
                        indi2 = num - 1 ;
                    } // End If for compare indi2
                }
                else if ( num < rand_num ) {
                    score = score - 10 ;
                    printf( "Sorry, the winning number is HIGHER than %d. (Score = %d)\n", num, score ) ;
                    if ( indi1 < num + 1 ) {
                        indi1 = num + 1 ;
                    } // End If for compare indi1
                } // End If for compare num to Higher and Lower
            }
            else if ( num == rand_num ) {
                printf( "This is correct! The winning number is %d.\n", rand_num ) ;
                printf( "Score this game: %d\n", score ) ;
                break ;
            } // End If for compare num with rand_num
        } // End While for score
        // Restart Process
        if ( score <= 0 ) {
            printf( "\nYou Failed!! (Score = %d)\n", score ) ;
        }
        printf( "Do you want to play a again? (1 = Yes / -1 = No): " ) ;
        scanf( "%d", &restart ) ;
        printf( "\n" ) ;
        score = 100 ;
        indi1 = 1 ;
        indi2 = 100 ;
    } // End While for restart value

    printf( "Program End." ) ;

    // Return 0
    return 0 ;
} // End Program
