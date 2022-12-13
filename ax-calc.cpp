#include <stdio.h>
#include <math.h>


int main(){



int recalc;
int promptmode = 0;


do {
	
	
	
	//selection between multi-number and single-number mode 
	int nummode;
	
	//To calculate again if 0 exit if one calculate again

	
	float a,b;
	char op;
	float ans;
	
	
	
	if (promptmode==1){
	
  	
	printf ("###########################################################\n");
	printf ("Enter 1 for multi-number and 0 single-number mode:\n");

	scanf("%d",&nummode);
	
	}else if (promptmode==0)
	{
	nummode = 1;	//default number mode if prompt is disabled
	}
	

	
	//select number insertion mode into the calculator
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
while (recalc < 0);




return 0;
}
