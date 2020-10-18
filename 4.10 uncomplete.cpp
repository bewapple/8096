#include <stdio.h>
#include <string.h>


struct student {
	char name[ 50 ] ; 
	float hight ;
};

int main (){
	
	
	int  i ;
	int  j ;
	int  N = 2 ;
	struct student a[ N ] ;	
	
	
	for ( i = 0 ; i < N ; i++) {
		
		
		
		printf ( "Enter Name : " ) ;
		scanf  ( "%s" , a[ i ].name ) ;
		
		printf ( "Enter your high : " ) ;
		scanf  ( "%f" , &a[ i ].hight ) ;
		
		printf ("Room A\n");
		printf ("------\n");
		printf ( "%s\n" , a[ i ].name ) ; 
		printf ( "%.2f\n" , a[ i ].hight ) ;
	}//end for i
	
	
	for ( j = 0 ; j < N ; j++) {
		
		
		
		printf ( "\nEnter Name : " ) ;
		scanf  ( "%s" , a[ j ].name ) ;
		
		printf ( "Enter your high : " ) ;
		scanf  ( "%f" , &a[ j ].hight ) ;
		
		printf ("Room B\n");
		printf ("------\n");
		printf ( "%s\n" , a[ j ].name ) ; 
		printf ( "%.2f\n" , a[ j ].hight ) ;
	}
	

	int s = 0 ;
	int hold ;
	char charge[ 50 ] ;
	
	for( i = 0 ; i < N ; i++ ) {
		
		for(  s = i + 1 ; s < N ; s++ ) {
			
			if( a[ i ].hight < a[ s ].hight ) {
				
				hold = a[ i ].hight ;
				a[ i ].hight = a[ s ].hight ;
				a[ s ].hight = hold ;
				
				strcpy( charge , a[ i ].name ) ;
				strcpy( a[ i ].name , a[ s ].name ) ;
				strcpy( a[ s ].name , charge ) ;
				
			}// end if swap
			
		}//end for j
		
	}//end for i
	
	
	
	printf ("%10s" , a[ 0 ].name) ;
	printf ("%10s" , a[ 1 ].name) ;
	printf ("%10s" , a[ 2 ].name) ;
	printf ("%10s" , a[ 3 ].name) ;
	
	return 0 ;
}//end fuction
