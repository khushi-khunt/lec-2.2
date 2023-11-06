#include<stdio.h>
#include<conio.h>

void main(){


  int base,height,area;
  clrscr();

  printf("Enter the value of height:- ");
  scanf("%d",&height);

  printf("Enter the value of base:- ");
  scanf("%d",&base);

  area=(base*height)/2;
  printf("Area of triangel is :%d",area);

  getch();

}