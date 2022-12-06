#include <stdio.h>

int main() {
	
	int ARN[10];
	int i;

	int sum=1;
	
	for (i = 0;i < 10;++i) {
		
		int h ;
		
		
		printf ("Write a number for cell %d :",i);

		scanf  ("%d",&ARN[i]);
		
		//ARN[i] = h;
		
		sum = sum * ARN[i];		
	}

	printf ("The total sum of numbers given is %d",sum);
	
	
	
	return 0;
	
	
	
}
