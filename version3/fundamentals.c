// FUNDAMENTALS MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE     80    // macro for buffer1 size which is 80 chars long
#define NUM_INPUT_SIZE  10    // macro for numInput size which is 10 chars long
#include "fundamentals.h"     // including the header file 



void fundamentals(void) {

	/* Version 1 */
	printf("*** Start of Indexing Strings Demo ***\n");
	// variables declaration
	char    buffer1[BUFFER_SIZE];   // buffer for string input
	char    numInput[NUM_INPUT_SIZE]; // buffer for position input
	size_t  position;                 // variable to hold the converted position
	do {
		printf("Type not empty string (q - to quit):\n");
		fgets(buffer1, BUFFER_SIZE, stdin);               // get user input for string
		buffer1[strlen(buffer1) - 1] = '\0';              //append a null terminator char at the end
		if (strcmp(buffer1, "q") != 0) {                  // assume the input string to not be the letter q and continue
			printf("Type the character position within the string:\n");
			fgets(numInput, NUM_INPUT_SIZE, stdin);       // get user input for position
			numInput[strlen(numInput) - 1] = '\0';        // append a null terminator char at the end
			position = atoi(numInput);                    // convert the position string into an integer and store in variable position
			if (position >= strlen(buffer1)) {            // If the position is greater than the string length, set it to the last valid position 
				position = strlen(buffer1) - 1;           // the chosen index is always a positive integer
				printf("Too big... Position reduced to max. available\n");

			}
			printf("The character found at %d position is \'%c\'\n", (int)position, buffer1[position]);  // print the character at the index position
		}
	} while (strcmp(buffer1, "q") != 0); // this loops as long as the input string is not 'q'
	printf("*** End of Indexing Strings Demo ***\n\n"); // ending message to indicate END OF PROGRAM 


	/*version 2*/
	printf("*** Start of Measuring Strings Demo ***\n");
	char buffer2[BUFFER_SIZE]; // char array for the string input
	do {
		printf("Type a string (q - to quit):\n"); // user input for string to be measured
		fgets(buffer2, BUFFER_SIZE, stdin);
		buffer2[strlen(buffer2) - 1] = '\0';  // append a null terminator to end of the string
		if (strcmp(buffer2, "q") != 0)         // continue as long as the string is not equal to q
			printf("The length of \'%s\' is %d characters\n",
				buffer2, (int)strlen(buffer2));        // print the length of the string
	} while (strcmp(buffer2, "q") != 0);      // continue the loop until q is entered as string input
	printf("*** End of Measuring Strings Demo ***\n\n");





	/*version 3*/
	printf("*** Start of Copying Strings Demo ***\n");
	char destination[BUFFER_SIZE];   // new char array of size BUFFER_SIZE to hold copied string
	char source[BUFFER_SIZE];        // new char array of size BUFFER_SIZE to get the string input
	do {
		destination[0] = '\0';           // assigning first index the value of null terminator
		printf("Destination string is reset to empty \n");
		printf("Type the source string (q - to quit):\n");
		fgets(source, BUFFER_SIZE, stdin);   // get the new string input to be copied
		source[strlen(source) - 1] = '\0';  // assigning last char in string with a null terminator
		if (strcmp(source, "q") != 0) {      // loop if entered string is not q
			strcpy(destination, source);         // copy the string from source to destination
			printf("New destination string is \'%s\'\n", destination);  // print the new string copied into destination
		}
	} while (strcmp(source, "q") != 0);     // iterate until the input string is not "q"
	printf("*** End of copying Strings Demo ***\n\n");
}
