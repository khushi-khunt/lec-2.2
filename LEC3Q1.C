#include<stdio.h>
#include<conio.h>

void main(){


  float area,radius;
  clrscr();

  printf("Enter the value of radius:- ");
  scanf("%f",&radius);

  area=3.14*radius*radius;
  printf("Area of circle is :%f",area);

  getch();

}