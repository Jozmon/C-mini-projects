#include <stdio.h>

int main() {
	
	//int numbers[20];
	int numbers[]={34,44,77,66,89,26,32};
	int loop;
	//printf("Cell1:%d\n",numbers[0]);
	//printf("Cell2:%d\n",numbers[1]);	
	
	
	//date_type array_name[rows][collumns];
	
	//char name [3][10];
	
	char arr[3][10]={"Antonis","nikos","Vagelis"};
	
	//int arr[4][3]={{1,2,3},{2,3,4},{3,4,5},{4,5,6}};
	
	
	//printf("Arrayl1:%c\n",name[0]);
	
	printf("String array elements are:\n");
	
	
	   for(loop = 0; loop < 10; loop++)
      printf("%s\n", arr[loop]);
	
	
	return 0;
	
	
}
Footer
