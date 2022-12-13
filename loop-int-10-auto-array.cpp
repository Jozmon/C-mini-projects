#include <stdio.h>

int main() {
	
	int n;
	int v = 0;
	
	int sum = 0;
	
	
	printf ("Give array size:");
	scanf ("%d",&n);
	
	int VBS[n];
	
	
	while ( v < n ){
		
		printf ("Write number for cell %d :",v);
		scanf  ("%d",&VBS[v]);
		
		sum = sum + VBS[v];
		
		++v;
		
		
	}
	
	
	printf ("The total sum of the numbers is:%d",sum);
	
	
	
	return 0;
	
}
