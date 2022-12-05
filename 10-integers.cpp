#include <stdio.h>

int main() {
	
	
	int i;
	
	int numbers[10];
	
	for (i = 0;i < 10; i++){
		
	printf ("Write an integer number under ten at cell %d:",i);
	
	
	
	scanf ("%d",numbers + i);
		
	while ( numbers[i] > 10){
		
		

		
	printf ("Bad number\n");


	printf ("Write an integer number under ten at cell %d:",i);
	scanf ("%d",numbers + i);
	}
		
		
		
		
		
		
	}
	
	
	
	
