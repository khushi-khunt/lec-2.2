#include<stdio.h>
#include<conio.h>

void main(){

  int subject1,subject2,subject3,subject4,subject5,subject6,subject7,subject8;
  float avg,pr;
  clrscr();

  printf("Enter the value of subject1:- ");
  scanf("%d",&subject1);

  printf("Enter the value of subject2:- ");
  scanf("%d",&subject2);

  printf("Enter the value of subject3 :- ");
  scanf("%d",&subject3);

  printf("Enter the value of subject4:- ");
  scanf("%d",&subject4);

  printf("Enter the value of subject5:- ");
  scanf("%d",&subject5);

   printf("Enter the value of subject6:- ");
  scanf("%d",&subject6);

   printf("Enter the value of subject7:- ");
  scanf("%d",&subject7);

   printf("Enter the value of subject8:- ");
  scanf("%d",&subject8);

  avg=(subject1+subject2+subject3+subject4+subject5+subject6+subject7+subject8)/8;
  printf("average:%0.2f\n",avg);

  pr=(avg*100)/800;
  printf("percentage: %0.2f",pr);

  getch();

}