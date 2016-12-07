/*
Student Name: Shivam Paudel
Roll no:
Lab Sheet no: 10
Program: C program to check no. is odd or even
Date: 05/12/2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("Enter a number");
	scanf("%d", &a);
	if(a%2==0)
	{
		printf("Number is even");
	}
	else
	{
		printf("Number is odd");
	}
	getch();
	return (0);
}



