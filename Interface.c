#include <stdio.h>
int HBP(int BPsys, int BPdias);
int HBP(int BPsys, int BPdias){
  if(BPsys>129 && BPdias>79){
    printf("You have High Blood Pressure. Please go see a Doctor\n");
  }else {
    printf("Your Blood Pressure is fine. Don't worry\n");
  }
 return BPsys,BPdias;
}
int main(){
 int n;
 printf("Hello! Welcome to the Health Checking Code\n");
 printf("What would you like to check today?\n");
 printf("1) Blood Pressure\n2) BMI\n");
 scanf("%d",&n);
 switch(n){
  case 1:
   int BPsys,BPdias;
   printf("Enter Systollic reading(Upper number)");
   scanf("%d",&BPsys);
   printf("Enter Diastolic reading(Lower number)");
   scanf("%d",&BPdias);
   HBP(BPsys,BPdias);
   break;
  case 2:
   float w,h,bmi;
   printf("Enter your weight in kg ");
   scanf("%f",&w);
   printf("Enter your height in meters ");
   scanf("%f",&h);
   bmi= w/(h*h);
   printf("Your BMI is: %f\n",bmi);
   if(bmi<18.5){
    printf("Your BMI is below average\n");
   }else if(bmi>=18.5 && bmi<=24.9){
     printf("Your BMI is perfect\n");
   }else if(bmi>=25 && bmi<=29.9){
     printf("You are overweight\n");
   }else{
     printf("You are obese\n");
   }
   break;
  default:
   printf("Invalid Input. Please Try Again");
 }
 return 0;
}
