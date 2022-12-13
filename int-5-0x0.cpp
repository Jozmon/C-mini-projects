#include <stdio.h>

int main(){
	
	//in input type 1 the array comes pre filled with numbers.
	//in input type 0 the user manually writes the numbers.
	int intype = 0;
	
	int n;     //array size
	
	int a;     //manual input counter
	
	int i = 0; //number print counter

	
	//int AR[5]; //array 

	

	
	if (intype == 1){

			int c = 0;                   //array add counter 
			int FILLAR[5]={1,4,5,8,6};   //array which is prefilled with numbers
			
			n = 5;      //sets array size
			int AR[n];  //array 
			
			while ( c < n){
	
			AR[c] = FILLAR[c];
			
			++c;
			
			}
	}else if (intype == 0){

			printf ("Give me an array size:");
			scanf ("%d",&n);
			
			int AR[n]; //array 
			
			while( a < n) {
				
			printf ("Write a number for cell %d :",a);
			
			scanf ("%d",&AR[a]);
			
			++a;
			
			}
		
	}
	
	


	
	
	while(i<n){
		
		printf ("The number: %d",AR[i]);
		
		if (AR[i] % 2 == 0){
			printf (" is even\n");
		}else {
			printf (" is odd\n");
		}
		
		
		++i;
		
	}
	
	return 0;
}
