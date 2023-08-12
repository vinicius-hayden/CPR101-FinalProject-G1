// MANIPULATING SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80 //set the macro for BUFFER_SIZE as 80
#include "manipulating.h" //include header file to point libraries and funciton header.


void manipulating(void) //Functions for string manipulation demonstrations.
{
	

	printf("*** start of Concatenating strings Demo ***\n");
	char string1[BUFFER_SIZE]; // define two character strings which hold user inputs
	char string2[BUFFER_SIZE];

	do {
		// start a do-while loop to repeat the below code blocks until user enters q to quit.
		printf("Type the 1st string (q - to quit):\n");
		fgets(string1, BUFFER_SIZE, stdin);//Read the user input which has the max memory of BUFFER_SIZE.
											//and store the user input to string1 variable.
		string1[strlen(string1) - 1] = '\0'; //remove the new line character from string1.

		if ((strcmp(string1, "q") != 0)) { //compare if the stored value of string1 and "q" and check If they are not the same.
											// if they are not equal, move to the below if block of codes.
			printf("Type the 2nd string: \n");
			fgets(string2, BUFFER_SIZE, stdin); //Read the user input which has the max memory of BUFFER_SIZE
												// Store the user input ot string2 variable.
			string2[strlen(string2) - 1] = '\0';//remove the new line character from string2.
			strcat(string1, string2); // Concatenate string2 at the end of string1
			printf("Concatenated string is \'%s\' \n", string1);
		}
	} while (strcmp(string1, "q") != 0); //set the condtion for while. If user enter "q" in string1 variable, exit the do-while loop.
	printf("*** End of Concatenating strings Demo ***\n\n");




/* Version 2 */


	printf("*** start of Comparing strings Demo ***\n");
	char compare1[BUFFER_SIZE]; // define two character strings which hold user inputs
	char compare2[BUFFER_SIZE]; //they have the array size of BUFFER_SIZE, which is set as 80 in macro

	int result; // set variable result as integer
	do {
		// start a do-while loop to repeat the below code blocks until user enters q to quit.
		printf("Type the 1st string to compare (q - to quit): \n");
		fgets(compare1, BUFFER_SIZE, stdin);//Read the user input which has the max memory of BUFFER_SIZE. 
		//and store the user input to compare1 variable.
		compare1[strlen(compare1) - 1] = '\0'; //remove the new line character from compare1.
		if (strcmp(compare1, "q") != 0) { //compare if the stored value of compare1 and "q" and check If they are not the same. 
			printf("Type the 2nd string to compare:\n");
			fgets(compare2, BUFFER_SIZE, stdin); // Read the user input which has the max memory of BUFFER_SIZE.
			//and store the user input to compare2 variable.
			compare2[strlen(compare2) - 1] = '\0';//remove the new line character from compare2.

			result = strcmp(compare1, compare2); //compare the data store in compare1 and compare2 varialbes and 
			// assign the result to result variable
			if (result < 0) // check if the data stored in result variable is less than 0 which compare1 has less data than compare2. 
				// if so, print the following message while passign the right variable of compare1 and compare2.
				printf("\'%s\' string is less than \'%s\'\n", compare1, compare2);
			else if (result == 0) // check if the data stored in the result variable is equal to 0, which compare1 and compare2 value matches together.
				// if so, then print the following message while passing the right variable of compare1 and compare2.
				printf("\'%s\' string is equal to \'%s\' \n", compare1, compare2);
			else //If other than the above IF condition, the following message is displayed.
				printf("\'%s\' string is greater than \'%s\' \n", compare1, compare2);
		}

	} while (strcmp(compare1, "q") != 0);//set the condtion for while. If user enter "q" in compare1 variable, exit the do-while loop.
	printf("*** End of Comparing strings Demo ***\n\n");
}



/* Version 3 */
/*
printf("*** start of Searching strings Demo ***\n");
char haystack[BUFFER_SIZE];
char needle[BUFFER_SIZE];
char* occurrence = NULL;
do {
	printf("Type the string (q - to quit) :\n");
	fgets(haystack, BUFFER_SIZE, stdin);
	haystack[strlen(haystack) - 1] = '\0';
	if (strcmp(haystack, "q") != 0) {
		printf("Type the substring:\n");
		fgets(needle, BUFFER_SIZE, stdin);
		needle[strlen(needle) - 1] = '\0';
		occurrence = strstr(haystack, needle);
		if (occurrence)
			printf("\'%s\' found at %ct position\n", needle,
					(int)(occurrence - haystack));
		else
			printf("Not found\n");
	)
] while (strcmp(haystack, "q") != 0);
				printf("*** End of Searching strings Demo ***\n\n");
		*/
