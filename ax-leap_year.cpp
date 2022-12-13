#include <stdio.h>

int main(){
	
	int year;
	
	
	printf ("Enter the year:");
	scanf  ("%d",&year);
	
	if (year % 400 == 0){
		printf ("The year %d is leap year\n",year);
	}else if(year % 100 == 0){
		printf ("The year %d is not leap year\n",year);
	}else if(year % 4 == 0){
		printf ("The year %d is leap year\n",year);	
} else {
		printf ("The year %d is not leap year\n",year);
}
	
	
	return 0;
	
}
