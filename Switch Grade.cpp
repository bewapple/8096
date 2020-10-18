#include <stdio.h>
int main (){
	int x ;
	scanf ("%d",&x);

	switch (x / 10 ){
		case 10 : // 100
		case 9 	: // 90-99
			printf ("A");
		break ;
		case 8 : // 80- 89
			printf ("B");
		break ;
		case 7 : // 70-79
			printf ("C");
		break ; 
		case 6 : // 60-69
			printf ("D");
		break ; 
		case 5 : // 50-59
			printf ("E");
		break ; 
		default : // ---49 == 0 
			printf ("F");	
	} 
	return 0 ;
}
