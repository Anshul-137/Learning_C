#include <stdio.h>
int HBP(int BPsys, int BPdias);
int HBP(int BPsys, int BPdias){
  if(BPsys>129 && Bpdias>79){
    printf("You have High Blood Pressure. Please go see a Doctor\n");
  }else {
    printf("Your Blood Pressure is fine. Don't worry\n");
  }
 return BPsys,BPdias;
}
int main(){
 int BPsys,BPdias;
 printf("Enter Systollic reading(Upper number)");
 scanf("%d",&BPsys);
 printf("Enter Diastolic reading(Lower number)");
 scanf("%d",&BPdias);
 HBP(BPsys,BPdias);
 return 0;
}
