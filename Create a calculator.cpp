/*
Student Name: Shivam Paudel
Roll no:36
Lab Sheet no: 13
Program: C program to write menu based program to create a calculator [using switchcase].
Date: 14/12/2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,a,b,d,sum,subtraction,product,division;
	printf("********************************SIMPLE CALCULATOR*********************************\n");
	printf("************************************Choose menu*******************************\n");
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
	printf("5. Exit\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1: 
		printf("Enter first number");
		scanf("%d",&a);
		printf("Enter second number");
		scanf("%d",&b);
		sum=a+b;
		printf("Sum is %d",sum);
	break;
		case 2: 
		printf("Enter first number");
		scanf("%d",&a);
		printf("Enter second number");
		scanf("%d",&b);
		subtraction=a-b;
		printf("Subtraction is %d",subtraction);
	break;
		case 3: 
		printf("Enter first number");
		scanf("%d",&a);
		printf("Enter second number");
		scanf("%d",&b);
		product=a*b;
		printf("product is %d",product);
	break;
		case 4: 
		printf("Enter first number");
		scanf("%d",&a);
		printf("Enter second number");
		scanf("%d",&b);
		division=a/b;
		printf("division is %d",division);
		break;
		case 5:
			printf("Thank you for visiting");
	}
	getch();
	return(0);
}
