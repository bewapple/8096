#include <stdio.h>
#include <string.h>

struct Student {
	
	char   Name[ 40 ]  ;
	float  Score	   ;
	
} ;

int main() {
	
	int a = 4 , i = 0 ;
	int hold = 0 ;
	char charge[ 40 ] ;
	
	struct Student Eiei[ a ] ;
	
	for( i = 0 ; i < a ; i++ ) {
		
		printf( "Input your Name :" ) ;
		scanf( "%s" , Eiei[ i ].Name ) ;
		
		printf( "Input your Score :" ) ;
		scanf( "%f" , &Eiei[ i ].Score ) ;
		
		printf( "\n----| Student |----\n" ) ;
		printf( "\n%10s : %10s", "Name" , Eiei[ i ].Name )  ; 
		printf( "\n%10s : %10.2f\n\n", "Score" , Eiei[ i ].Score ) ; 

	}//end for
	
	for( i = 0 ; i < a ; i++ ) {
		
		for( int j = i + 1 ; j < a ; j++ ) {
			
			if( Eiei[ i ].Score < Eiei[ j ].Score ) {
				
				hold = Eiei[ i ].Score ;
				Eiei[ i ].Score = Eiei[ j ].Score ;
				Eiei[ j ].Score = hold ;
				
				strcpy( charge , Eiei[ i ].Name ) ;
				strcpy( Eiei[ i ].Name , Eiei[ j ].Name ) ;
				strcpy( Eiei[ j ].Name , charge ) ;
				
			}// end if swap
			
		}//end for j
		
	}//end for i
	
	printf( "%10s ", Eiei[ 0 ].Name  ) ;
	printf( "%10s ", Eiei[ 1 ].Name  ) ;
	printf( "%10s ", Eiei[ 2 ].Name  ) ;
	printf( "%10s ", Eiei[ 3 ].Name  ) ;
	
	printf( " \n\n " ) ;
	
	printf( "%10.2f ", Eiei[ 0 ].Score  ) ;
	printf( "%10.2f ", Eiei[ 1 ].Score  ) ;
	printf( "%10.2f ", Eiei[ 2 ].Score  ) ;
	printf( "%10.2f ", Eiei[ 3 ].Score  ) ;
	
	return 0 ;
}//end function main
