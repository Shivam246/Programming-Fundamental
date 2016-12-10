/*
Student Name: Shivam Paudel
Roll no:
Lab Sheet no: 2
Program: C program to print the area of triangle, based and height asked from user.
Date: 10/12/2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	float a,b,area;
	printf("Enter the base of triangle");
	scanf ("%f",&a);
	printf("Enter the height of triangle");
	scanf("%f",&b);
	area=0.5*a*b;
	printf("The area of triangle is %f",area);
	getch();
}
