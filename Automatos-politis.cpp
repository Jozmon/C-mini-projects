#include <stdio.h>

int main()
{
  float a,b,sum;
  int x;
  agg:
  printf("Menu, δωσε εναν αριθμο απο το 1 μεχρι το 10.\n");
  printf("Δώσε 1 για coca cola\n");
  printf("Δώσε 2 για monster\n");
  printf("Δώσε 3 για hell \n");
  printf("Δώσε 4 για νερό\n");
  printf("Δώσε 5 για redbull\n");
  printf("Δώσε 6 για χυμό πορτοκάλι\n");
  printf("Δώσε 7 για pina colada\n");
  printf("Δώσε 8 για cosmopolitan\n");
  printf("Δώσε 9 για margarita\n");
  printf("Δώσε 10 για μοξίτο\n");
  scanf("%d",&x);
  switch (x)
  {
      case 1:{
          printf("coca cola\n");
          printf("kostizei 1,50 euro\n");
          goto aaa;
      }
     case 2:{
         printf("moster\n");
         printf("kostizei 2.00 euro\n");
         goto aaa;
     case 3:{
         printf("hell\n");
         printf("kostizei 1.00 euro\n");
         goto aaa;
     }
     case 4:{
         printf("νερο\n");
         printf("kostizei 0.50 euro\n");
         goto aaa;
     } 
     case 5:{
         printf("redbull\n");
         printf("kostizei 1.60 euro\n");
         goto aaa;
     } 
     case 6:{
         printf("xumos portokali\n");
         printf("kostizei 1.50 euro\n");
         goto aaa;
     }
     case 7:{
         printf("pina colada\n");
         printf("kostizei 2.50 euro\n");
         goto aaa;
     }
     case 8:{
         printf("cosmopolitan\n");
         printf("kostizei 2.50 euro\n");
         goto aaa;
     }
     case 9:{
         printf("margarita\n");
         printf("kostizei 2.50 euro\n");
         goto aaa;
     }
     case 10:{
         printf("μοξίτο\n");
         printf("kostizei 2.50 euro\n");
         goto aaa;
     }
      default:{
      printf("Δεν αντιστοιχει ο αριθμος που εδωσες\n");
      goto agg;
      }
  }
  aaa:
  printf("\nΕισαι σιγουρος για την αγορα σου?, \n1 gia nai, \n2 gia oxi\n");
  scanf("%g",&b);
  if (b==1){
      printf("Ολοκληρωσε την αγορα σου\n");
      if (x==1){
           a=1.50;
          printf("Προσθεσε ποσο");
          scanf("%g",&b);
          sum=b-a;
          printf("ρεστα:%geuro",sum);
      }
      if (x==2){
          a=2.00;
          printf("Προσθεσε ποσο");
          scanf("%g",&b);
          sum=b-a;
          printf("ρεστα:%g euro",sum);
      }
      if (x==3){
          a=1.00;
          printf("Προσθεσε ποσο");
          scanf("%g",&b);
          sum=b-a;
          printf("ρεστα:%g euro",sum);
      }
      if (x==4){
          a=0.50;
          printf("Προσθεσε ποσο");
          scanf("%g",&b);
          sum=b-a;
          printf("ρεστα:%g euro",sum);
      }
      if (x==5){
          a=1.60;
          printf("Προσθεσε ποσο");
          scanf("%g",&b);
          sum=b-a;
          printf("ρεστα:%g euro",sum);
      }
      if (x==6){
           a=1.50;
          printf("Προσθεσε ποσο");
          scanf("%g",&b);
          sum=b-a;
          printf("ρεστα:%g euro",sum);
      }
      if (x==7){
           a=2.50;
          printf("Προσθεσε ποσο");
          scanf("%g",&b);
          sum=b-a;
          printf("ρεστα:%g euro",sum);
      }
      if (x==8){
          a=2.50;
          printf("Προσθεσε ποσο");
          scanf("%g",&b);
          sum=b-a;
          printf("ρεστα:%g euro",sum);
      }
      if (x==9){
          a=2.50;
          printf("Προσθεσε ποσο");
          scanf("%g",&b);
          sum=b-a;
          printf("ρεστα:%g euro",sum);
      }
      if (x==10){
          a=2.50;
          printf("Προσθεσε ποσο");
          scanf("%g",&b);
          sum=b-a;
          printf("ρεστα:%g euro",sum);
      }
  }
  else if (b==2){
      printf("Ακυρωθηκε η συναλλαγη\n");
      goto agg;
  }
  else {
      printf("1 η 2 ρε!!\n");
      goto aaa;
  } 
}
}
