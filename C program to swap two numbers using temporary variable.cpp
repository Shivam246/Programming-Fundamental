/*
Student Name: Shivam Paudel
Roll no:36
Lab Sheet no: 13
Program: C program to swap the two number using temporary variable.
Date: 14/12/2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,temp;
		printf("Enter first number:\n");
		scanf("%d",&a);
		printf("Enter second number\n");
		scanf("%d",&b);
		printf("Before swap first number is:%d\n",a);
		printf("Before swap second number is: %d\n",b);
		
	temp=a;
		a=b;
		b=temp;
		
		printf("After swap first number is:%d\n",a);
		printf("After swap second number is:%d",b);
	
		getch();
		return(0);
	}
