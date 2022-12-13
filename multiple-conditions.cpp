#include <stdio.h>

int main(){
	
	//in input type 1 the array comes pre filled with numbers.
	//in input type 0 the user manually writes the numbers.
	
	input_type=1;
	int i = 0;
	
	if (input_type = 1){
		int AR[5] = {1,4,5,8,6};
	}else if (input_type = 0){
		int AR[5];
		int a = 0;
			
		while(a<5){
		printf (" Write a number for cell %d :",AR[a]);
		scanf ("%d",AR[a]);
			
		}
	}
	
	
	
	
	
	
	while(i<5){
		
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
