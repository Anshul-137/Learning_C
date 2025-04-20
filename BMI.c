#include <stdio.h>
int main(){
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
 return 0;
}
