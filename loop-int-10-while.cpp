#include <stdio.h>

int main() {
	
	int VBS[10];
	int v = 0;
	
	int sum = 0;
	
	
	while ( v < 10 ){
		
		printf ("Write number for cell %d :",v);
		scanf  ("%d",&VBS[v]);
		
		sum = sum + VBS[v];
		
		++v;
		
		
	}
	
	
	printf ("The total sum of the numbers is:%d",sum);
	
	
	
	return 0;
	
}
