#define _CRT_SECURE_NO_WARNINGS 
//including the header files of each module(function) that contains the function prototypes 
#include "fundamentals.h"
#include "manipulating.h"
#include "converting.h"
#include "tokenizing.h"


int main(void) // main function
{
	char buff[10]; //deefining a character array to store the user's entered input
	do
	{
		//displaying the options to user 
		printf("1 - Fundamentals\n");
		printf("2 - Manipulating\n");
		printf("3 - Converting\n");
		printf("4 - Tokenizing\n");
		printf("0 - exit\n");
		// primpting the user to pick an option
		printf("Which module to run?\n");
		fgets(buff, 10, stdin); /*reding the user iput with a limit of 10
		                         characters and storing it in the array called "buff"*/
		switch (buff[0]) //using the "buff" array first element to campare with declared cases 
		{
		case '1': fundamentals();// the fundamentals function will be called if the user enters 1
			break;
		case '2': manipulating();// the manipulating function will be called if the user enters 2
			break;
		case '3': converting();// the converting function will be called if the user enters 3
			break;
		case '4': tokenizing();// the tokenizing function will be called if the user enters 4
			break;
			
		}

	} while (buff[0] != '0');// if the user enters 0, the program will stop prompting the user for an input
	return 0;
}