/*
Student Name: Shivam Paudel
Roll no:
Lab Sheet no: 2
Program: C program to print sum of two number , asked from user.
Date: 07/12/2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,sum,product;
	printf("Enter the first number");
	scanf ("%d",&a);
	printf("Enter the second number");
	scanf("%d",&b);
	printf("Enter the third number");
	scanf ("%d",&c);
	sum=a+b+c;
	product=a*b*c;
	printf("The sum of three numbers is %d\n",sum);
	printf("The product of three numbers is %d",product);
	getch();
}
