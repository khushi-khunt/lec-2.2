#include<stdio.h>
#include<conio.h>
void main(){
  int principal,rate,time,SI;
clrscr();
   printf("enter the value of principal");
   scanf(" %d",&principal);
   printf("enter the value of rate");
   scanf(" %d",&rate);
   printf("enter the value of time");
   scanf(" %d",&time);
   SI=(principal*rate*time)/100;
   printf("simple intrest is:%d" ,SI);

getch();
}