
// CONVERTING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "converting.h"


void converting() {
    /* Version 1 */
    
        printf("*** Start of Converting Strings to int Demo ***\n");

    // Declare a character array to hold the input string
    char intString[BUFFER_SIZE];

    // Declare an integer variable to hold the converted number
    int intNumber;

    // Start a do-while loop to repeatedly ask for input and convert
    do {
        // Prompt the user to input an integer numeric string
        printf("Type an int numeric string (q - to quit) :\n");

        // Read input from the user and store it in intString
        fgets(intString, BUFFER_SIZE, stdin);

        // Remove the newline character from the input string
        intString[strlen(intString) - 1] = '\0';

        // Check if the input string is not "q" (quit)
        if (strcmp(intString, "q") != 0) {
            // Convert the input string to an integer using atoi
            intNumber = atoi(intString);

            // Print the converted number
            printf("Converted number is %d\n", intNumber);
        }

        // Continue looping as long as the input string is not "q"
    } while (strcmp(intString, "q") != 0);

    // Print a message to indicate the end of the demo
    printf("*** End of Converting Strings to int Demo ***\n\n");

    /* Version 2 */
  

        printf("*** Start of Converting Strings to double demo ***\n");

    char doubleString[BUFFER_SIZE];  // Declare an array to store user input
    double doubleNumber;  // Declare a variable to store the converted number

    do {  // Start a do-while loop that will run at least once
        printf("Type the double numeric string (q - to quit):\n");  // Prompt user for input
        fgets(doubleString, BUFFER_SIZE, stdin);  // Read input from user (including newline)

        doubleString[strlen(doubleString) - 1] = '\0';  // Remove newline character by replacing with null terminator

        if (strcmp(doubleString, "q") != 0) {  // Check if input is not "q"
            doubleNumber = atof(doubleString);  // Convert string to double using atof
            printf("Converted number is %f\n", doubleNumber);  // Print the converted number
        }
    } while (strcmp(doubleString, "q") != 0);  // Continue loop until user enters "q"

    printf("*** End of Converting Strings to double demo ***\n\n");  // Print end message


    /* Version 3 */



}
