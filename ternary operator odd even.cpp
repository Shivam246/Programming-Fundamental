/*
Student Name: Shivam Paudel
Roll no:
Lab Sheet no: 10
Program: C program to check number is odd or even using ternary operator.
Date: 07/12/2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("Enter any number\n"),
	scanf("%d",&a);
	(a%2==0)?printf("The number is even ",a):printf("The number is odd ",a);
	getch();
	return(0);
}
