] /*
Student Name: Shivam Paudel
Roll no:
Lab Sheet no: 10
Program: C program to check wheather a number is divisible by 5 & 11 or not.
Date: 14/12/2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
int a;
	printf("Enter first number ");
	scanf("%d",&a);
	if(a%5==0 && a%11==0)
	{
		printf("The number is divisible by 5 and 11 ",a);
	}
	else
	{
		printf("The number is not divisible by 5 and 11 ",a);
	}
	getch();
	return(0);
}
