/*
Student Name: Shivam Paudel
Roll no:
Lab Sheet no: 10
Program: C program to check character assigned from user is vowel or not capital too
Date: 07/12/2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	char a;
	printf("Enter any character\n");
	scanf("%c",&a);
	if (a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
	{
		printf("Characters are vowel");
	}
	else
	{
		printf("Characteres are not vowels");
	}
	getch();
	return(0);
}

