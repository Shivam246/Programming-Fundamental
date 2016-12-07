/*
Student Name: Shivam Paudel
Roll no:
Lab Sheet no: 10
Program: C program to check largest number among three numbers.
Date: 07/12/2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("Enter first number ");
	scanf("%d",&a);
	printf("Enter second number ");
	scanf("%d",&b);
	printf("Enter third number ");
	scanf("%d",&c);
	if (a>=b && a>=c)
	{
		printf("Largest is %d",a);                              
	}
	else if (b>=a && b>=c)
	{
		printf("Largest is %d",b);
	}
	else
	{
		printf("Largest is %d",c);
	}
	getch();
	return(0);
}



