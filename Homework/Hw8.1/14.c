#include <stdio.h>

int main()
{
    int pos, year, projects ;
    int salary = 0 ;
    int Bonus = 0 ;
    int percentage = 0 ;
    int Specialbonus = 0 ;
    int total = 0 ;

    printf( "Position (1=Junior, 2=Mid, 3=Senior : " ) ;
    scanf( "%d", &pos ) ;

    printf( "Years of Experience: ") ;
    scanf( "%d", &year ) ;

    printf( "Number of Projects Completed this Year: " ) ;
    scanf( "%d", &projects ) ;

    if  ( pos == 1 ) {
        salary = 20000 ;
    }
    else if ( pos == 2 ) {
        salary = 35000 ;
    }
    else if ( pos == 3 ) {
        salary = 50000 ;
    } //end if
    
    if ( year < 1 ) {
        percentage = 0 ;
    }
    else if ( year <= 3 ) {
        percentage = 10 ;
    }
    else if ( year <= 5 ) {
        percentage = 15 ;
    }
    else if ( year > 5 ) {
        percentage = 20 ;
    } //end if

    Bonus = salary * percentage  /100 ;

    if( projects > 5 ) {
        Specialbonus = salary * 5 /100 ;
    } //end if
    
    total = salary + Bonus + Specialbonus ;

    printf( "\nBase Salary: %d THB\n", salary ) ;
    printf( "Experience Bonus: %d THB\n", Bonus ) ;
    printf( "Special Bonus: %d THB\n", Specialbonus ) ;
    printf( "Net Salary: %d THB\n", total ) ;

    return 0 ;
    
} //end function