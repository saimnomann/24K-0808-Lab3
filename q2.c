#include<stdio.h>
int main(){
int num1=7,num2=6;
printf("%d\n%d\n",num1,num2);
num1=num1+num2;//num1=13
num2=num1-num2 ;//num2 7
num1=num1-num2 ;//num2 12
printf("%d\n%d",num1,num2);
}