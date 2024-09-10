#include<stdio.h>
int main(){
float  x1,y1,x2,y2;
printf("Please enter points for x1,y1");
scanf("%f %f",&x1,&y1);
printf("Please enter points for x2,y2");
scanf("%f %f",&x2,&y2);
float m=(y2-y1)/(x2-x1);
printf("Slope is %.3f",m);
}