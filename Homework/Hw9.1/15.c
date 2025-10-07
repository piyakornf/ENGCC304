#include <stdio.h>

int main() {
    int n ;
    int arr[100] ;   
    int i, j ;

    printf( "Enter N : " ) ;
    scanf( "%d", &n ) ;

    for ( i = 0; i < n; i++ ) {
        printf( "Enter value[%d] : ", i ) ;
        scanf( "%d", &arr[i] ) ;
    } //end for

    printf( "Index:" ) ;
    for ( i = 0; i < n; i++ ) {
        printf( " %d", i ) ;
    } //end for
    printf( "\n" ) ;

    printf( "Array:" ) ;
    for ( i = 0; i < n; i++ ) {
        if ( arr[i] < 2 ) {
            printf( " #" ) ;   
        } else {
            for ( j = 2; j * j <= arr[i]; j++ ) {
                if ( arr[i] % j == 0 ) {
                    break ;  
                } //end if
            } //end for
            if ( j * j > arr[i] ) {
                printf( " %d", arr[i] ) ;  
            } else {
                printf( " #" ) ;         
            } // end if
        } // end if
    } //end for
    printf( "\n" ) ;

    return 0 ;
} //end function
