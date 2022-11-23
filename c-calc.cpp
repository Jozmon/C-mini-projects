#include <stdio.h>
#include <math.h>

int main()
{
	
	//selection between multi-number and single-number mode 
	int nummode;
	
	//To calculate again if 0 exit if one calculate again
	int recalc;
	
	float a,b;
	char op;
	float ans;
	
	
while(recalc=1) {
  	
	printf ("###########################################################\n");
	printf ("Enter 1 for multi-number and 0 single-number mode:\n");

	
	scanf("%d",&nummode);
	
	if (nummode==1){

	printf("\n\n\n");	
	printf("###########################################################\n");
	printf("To calculate write two numbers and an operator in between:\n");
	
    scanf("%f%c%f",&a,&op,&b);
    
   	}else if(nummode==0) {
   		
    printf("\n\n\n");
	printf("###########################################################\n");
	printf("Write the mathematical operator\n");
    printf("Available options are +, -, /, ^, s :\n");
    scanf(" %c" ,&op);
	
	
	printf("Write the first number \n");
	
    scanf ("%f",&a);

    printf("Write the second number:\n");
    scanf("%f",&b);
    }
    
	if(op=='+')
	{
		ans=a+b;
		printf("%f%c%f=%f",a,op,b,ans);
    }else if(op=='-')
    {
    	ans=a-b;
    	printf("%f%c%f=%f",a,op,b,ans);
	}else if(op=='*')
	{
		ans=a*b;
		printf("%f%c%f=%f",a,op,b,ans);
	}else if (op=='/')
	{
		if(b==0)
		{
			printf("error\n");
		}else
		{
			ans=a/b;
			printf("%f%c%f=%f",a,op,b,ans);
		}
	}else if(op=='^')
	{
		ans=pow(a,b);
		printf("%f%c%f=%f",a,op,b,ans);
	}else if(op=='s')
	{
		ans=sqrt(b);
		printf("%f",ans);
	}	   
	
	printf("\n\n");	
	printf("####################################################\n");
	printf("If you like to calculate again press 1\n");
	printf("or 0 to exit then press enter:");
	
    scanf("%d", &recalc);
	printf("\n%d\n", recalc);
}


return 0;

}
