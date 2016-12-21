/*
Student Name: Shivam Paudel
Roll no:36
Lab Sheet no: 14
Program: C program to check character assigned from user is alphabet or not.
Date: 21/12/2016 
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	char c;
	int ascli; 	
	printf("Enter any character\n");
	scanf("%c",&c);
	ascli=c;
	if (ascli>=97&&ascli<=122||ascli>=65&&ascli<=90)
	{
		printf("%The character is alphabet");
	}
	else
	{
		printf("%d is not alphabet");	
	}
	getch();
	return(0);
}

