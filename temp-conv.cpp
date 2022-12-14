#include <stdio.h>

int main(){

int temp;

int conv;

// default mode
int mode=1;



// 1 is for celsius to fahrenheit
// 2 is for fahrenheit to celsus

printf ("Write 1 to convert from celsius to farenheit or\n");
printf ("Write 2 to convert from farenheit to celsius:");
scanf  ("%d",&mode);






if ( mode == 1 ){
//from celsius to fahrenheit

printf ("\n\n");
printf ("Write the temperature in celsius:");
scanf  ("%d",&temp);

conv = temp * 1.8;
conv = conv + 32;

} else if ( mode == 2 ) {
//from fahrenheit to celsius

printf ("\n\n");
printf ("Write the temperature in fahrenheit:");
scanf  ("%d",&temp);

conv = temp - 32;
conv = conv * 5;
conv = conv / 9;
}

printf ("\n\n");
printf ("The temperature is:%d",conv);


return 0;

}
