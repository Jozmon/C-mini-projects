#include <stdio.h>
#include <ctype.h>


int main() {
	
	char str;
	int  mode;
	
	mode = 2;
	
	printf ("write a character:\n");
	scanf  ("%c",&str);
	
	//printf ("Character %c is part of alphabet",str, isalpha(str));
	
if(mode=1){
	if (isalpha(str)) {
		
		printf ("The input is part of the alpha");	
	}else {
		
		printf ("The input is NOT part of the alpha");	
	}
	
	}else if(mode=2){

	if (str > 65 ){
		printf ("The input is part of the alpha");	
	}else if (str > 122){
		printf ("The input is NOT part of the alpha");	
	}
	
	}
	
	
	
	return 0;
	
	
}
