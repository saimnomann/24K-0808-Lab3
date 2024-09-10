#include<stdio.h>
int main(){
int  rate, principal,time;
printf("Please enter principal between 100Rs To 1,000,000 Rs");
scanf("%d",&principal);
if(principal >=100 && principal <=1000000){
printf("Please enter rate of interest between 5 and 10");
scanf("%d",&rate);
if (rate>=5 && rate<=10){
printf("Please enter time between 1 and 10 years");
scanf("%d",&time);
if(time>=1 && time<=10){
float interest= (principal * rate*time)/100;
printf("%f",interest);
}
}
}
}