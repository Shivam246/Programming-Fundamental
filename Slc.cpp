/*
Student Name: Shivam Paudel
Roll no:
Lab Sheet no: 10
Program: C program to use relational operator
Date: 05/12/2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter any number");
    scanf("%d",&a);
    if(a>=80 && a<=100)
    {
        printf("You have passed your SLC with distinction");

    }
    if(a>=60 && a<80)
    {
        printf("You have passed your SLC with First Division");

    }
    if(a>=45 && a<60)
    {
        printf("You have passed your SLC with Second Division");
    }
	    if(a>=32 && a<45)
    {
        printf("You have passed your SLC with Third Division");
    }
	    if(a>=0 && a<32)
    {
        printf("You have failed");
    }
    getch();
    return (0);
 }

