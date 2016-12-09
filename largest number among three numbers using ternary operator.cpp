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
	int a,b,c;
		printf("Enter first number\n");
		scanf("%d",&a);
		printf("Enter second number\n");
		scanf("%d",&b);
		printf("Enter third number\n");
		scanf("%d",&c);
		(a>=b&&a>=c)?printf("The largest number is %d",a):(b>=a&&b>=c)?printf("The largest number is %d",b):printf("The largest number is %d",c);
		getch();
		return(0);
		
}
