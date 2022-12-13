#include <stdio.h>

int age;
int pnumber;

char name[10];


int main() {

printf ("Write name:");
scanf  ("%s",name);

printf ("Write age:");
scanf  ("%d",&age);

printf ("Write phone number:");
scanf  ("%d",&pnumber);


printf ("\n\n\n\n");
printf ("Your name is:%s\n",name);

printf ("Your age is:%d\n",age);
printf ("Your phone number is:%d\n",pnumber);


return 0;

}

