/*
Student Name: Shivam Paudel
Roll no:
Lab Sheet no: 12
Program: C program to print the largest number among three number using ternary operator.
Date: 09/12/2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
		printf("Enter first number");
		scanf("%d",&a);
		printf("Enter second number");
		scanf("%d",&b);
		(a>=b && a>=b)?printf("Largest number is %d",a):printf("Largest number is %d",b);
		getch();
		return(0);
		
}
