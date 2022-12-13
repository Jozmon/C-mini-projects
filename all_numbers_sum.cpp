#include <stdio.h>

int main() {
	
	int ARN[10];
	int i;
	//int numsum;
	int sum=0;
	
	for (i = 0;i < 10;++i) {
		
		int h ;
		
		printf ("\n");
		printf ("Write a number for cell %d :",i);

		scanf  ("%d",&ARN[i]);
		
		//ARN[i] = h;
		
		sum = sum + ARN[i];		
	}
	
    	printf ("\n\n");
	printf ("The total sum of numbers given is %d",sum);
	
	
	
	return 0;
	
	
	
}
