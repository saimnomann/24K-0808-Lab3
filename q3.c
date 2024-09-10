#include<stdio.h>
int main(){
int salary,tax_rate;
printf("Please enter salary");
scanf("%d",&salary);
printf("Please enter tax rate");
scanf("%d",&tax_rate);
int tax= (salary*tax_rate)/100;
float net_sal=salary-tax;
printf("The tax you have to pay is %d and the net salary you will get is %.2f",tax,net_sal);

}