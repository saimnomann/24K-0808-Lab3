#include<stdio.h>
int main(){
int dis_a = 1207,dis_b=1207,fuel_forward=118,fuel_return=123,fuel_avg;
printf("Please enter your fuel average in positive values");
scanf("%d",&fuel_avg);
if(fuel_avg>=0){
int total_cost=((1207/fuel_avg)*fuel_forward)+((1207/fuel_avg)*fuel_return);
printf("The total cost for fuel is %d",total_cost);
}
else{
printf("Please enter positive value");
}
}