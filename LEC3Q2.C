#include<stdio.h>
#include<conio.h>

void main(){


  int width,height,area;
  clrscr();

  printf("Enter the value of height:- ");
  scanf("%d",&height);

  printf("Enter the value of width:- ");
  scanf("%d",&width);

  area=width*height;
  printf("Area of rectangle is :%d",area);

  getch();

}