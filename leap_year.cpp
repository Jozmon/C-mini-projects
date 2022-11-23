#include <stdio.h>

int main(){
	
	int year;
	
	
	printf ("Enter the year:");
	scanf  ("%d",&year);
	
	if (year % 400 == 0){

		printf ("The year %d is a leap year1",year);
	}else if(year % 100 == 0){
		printf ("The year %d is leap year2",year);
		}else if(year % 4 == 0){
		printf ("The year %d is leap year3",year);	
}else{
printf ("The year %d is not a leap year",year);	
}
	
	return 0;
	
}
