#include <string.h>
#include <stdio.h>

int main() {
	
	char output[ 256 ] ;
	int i = 0 , dot = 0 ;
	float num = 0 ;
	int size = strlen(output) ;
	
	printf( "input your number :" ) ;
	scanf( "%f" , &num  ) ;
	
	sprintf( output , "%f" , num ) ; //float to string
	
	//set dot 
	for( i = 0 ; output[ i - 1 ]  != '.'  ; i++ ) {
		
		dot = i ;
	
	}//end for
	
	//printf comma
	for( i = 0 ; i < dot ; i ++ ) {
		
		if( ( dot - i )%3 == 0 ){
			//if bug = , 1,000 use && i != 0
			printf( "," ) ;
		
		}//end if
		
		printf( "%c" , output[ i ] ) ;
		
	}//end for
	
	//printf dot
	
	for( i = dot ; i <= dot+2 ; i ++ ){
		
		printf( "%c" , output[ i ] ) ;
		
	}//end for	
	
	return 0 ;
}//end function
