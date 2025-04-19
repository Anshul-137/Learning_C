#include <stdio.h>
int main(){
 int n;
 printf("Hello! Welcome to the Health Checking Code\n");
 printf("What would you like to check today?\n");
 printf("1) Blood Pressure\n2) BMI\n3) Pulse Rate\n4) Waist-Hip Ratio\n");
 scanf("%d",&n);
 switch(n){
  case 1:
   //HBP program in files//
   break;
  case 2:
   //BMI program in files//
   break;
  case 3:
   //Pulse program in files//
   break;
  case 4:
   //WHR program in files//
   break;
  default:
   printf("Invalid Input. Please Try Again");
 }
 return 0;
}
