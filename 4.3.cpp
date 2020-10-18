#include <stdio.h>
#include <string.h>

struct Employee {
	
	char name[ 50 ] ;
	float salary , years ;
	
};

int main() {
	
	char  output[ 256 ] ;
	char  output2[ 256 ];
	char  cf ;
	int   i = 0 , dot = 0 , keep = 0 ;
	float num = 0 , sum = 0 ;
	float avg ,Apay ;
	float hold ;
	char  hold2[ 50 ] ;
	
	struct Employee GroupA[ 10 ] ;
	
	do{
		
		printf( "Do you want to Enter Employee Information? (y/n) : " ) ;
		scanf( " %c" , &cf ) ;
		
		if( cf == 'y' ) {
			
			printf( "Employee Name : " ) ;
			scanf( "%s" , GroupA[ keep ].name ) ;
			
			printf( "Salary (Bath/Month) : " ) ;
			scanf( "%f" , &GroupA[ keep ].salary ) ;
			
			printf( "Duration (Year) : " ) ;
			scanf( "%f" , &GroupA[ keep ].years ) ;
			
			keep++ ;
		}//end if
		
	}while( cf != 'n' ) ; //end while 
	
	printf( "--------------\n" ) ;
	
	for( i = 0 ; i <= keep ; i ++ ) {
		
		num = num + GroupA[ i ].salary ;
		
	}// end for
	
	sum = num / keep ;
	
	sprintf( output , "%f" , sum ) ;
	
	printf( "Average of Salary : " ) ;
	
	for( i = 0 ; output[ i - 1 ] != '.' ; i++ ){
		
		dot = i ;
		
	}//end for
	
	for( i = 0 ; i < dot ; i ++ ) {
		
		if( (dot-i)%3 == 0 && i != 0 ){
			
			printf( "," ) ;
			
		}//end if
		
		printf( "%c" , output[ i ] ) ;
		
	}//end for
	
	printf( " bath\n" ) ;
	
	sprintf( output2 , "%f" , num ) ;
	
	printf( "Payment of every month : " ) ;
	
	for( i = 0 ; output2[ i - 1 ] != '.' ; i++ ){
		
		dot = i ;
		
	}//end for
	
	for( i = 0 ; i < dot ; i ++ ) {
		
		if( (dot-i)%3 == 0 && i != 0 ){
			
			printf( "," ) ;
			
		}//end if
		
		printf( "%c" , output2[ i ] ) ;
		
	}//end for
	
	printf( " bath\n" ) ;
	printf( "--------------\n" ) ;
	printf( "** Most duration in this business **\n" ) ;
	
	for( i = 0 ; i < keep ; i ++ ){
		
		for( int j = i + 1 ; j < keep ; j ++ ) {
			
			if( GroupA[ i ].salary < GroupA[ j ].salary ) {
				
				hold = GroupA[ i ].salary ;
				GroupA[ i ].salary = GroupA[ j ].salary ;
				GroupA[ j ].salary = hold ;
				
				strcpy( hold2 , GroupA[ i ].name ) ;
				strcpy( GroupA[ i ].name , GroupA[ j ].name ) ;
				strcpy( GroupA[ j ].name , hold2 ) ;
				
			}//end if swap
			
		}//end for
		
	}//end for
	
	printf( "\n%10s" , GroupA[ 0 ].name ) ;
	printf( "\n%10.2f" , GroupA[ 0 ].salary ) ;
	
	return 0 ;
}//end function
