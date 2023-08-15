// TOKENIZING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300 //set the macro for BUFFER_SIZE as 300
#include "tokenizing.h" //this is to include tokenizing header file
//V1
void tokenizing(void) { //this is where the function defintion begins
	printf("*** Start of Tokenizing Words Demo ***\n"); //this prints the message which is in the double quotes
	char words[BUFFER_SIZE]; // an array of type character 'words' has been declared of size 300
	char* nextWord = NULL; // a pointer of type char 'word' has been declared
	int	wordsCounter; // an variable of type integer 'wordsCounter' has been declared
	do {
		printf("Type a few words seperated by space (q - to quit):\n"); // this prints the message to prompt the user to enter words seperated by spaces or q to quit
		fgets(words, BUFFER_SIZE, stdin); // user input data
		words[strlen(words) - 1] = '\0';
		if (strcmp(words, "q") != 0) { // Check if input is not 'q'
			nextWord = strtok(words, " "); // Tokenize input string
			wordsCounter = 1; // Initialize word counter

			while (nextWord) { // Iterate through tokenized words
				printf("Word #%d is \'%s\'\n", wordsCounter++, nextWord); // Print word and its count
				nextWord = strtok(NULL, " "); // Move to the next token
			}
		}
	} while (strcmp(words, "q") != 0); // Continue loop until input is 'q'

	printf("*** End of Tokenizing Words Demo ***\n\n"); // Print end message


  // V2
	//This is where function definition begins
	printf("*** Start of Tokenizing Phrases Demo ***\n"); //this prints the message which is in the double quotes
	char phrases[BUFFER_SIZE]; // an array of type character 'phrases' has been declared of size 300
	char* nextPhrase = NULL; // a pointer of type char 'phrases' has been declared
	int	phrasesCounter; // an variable of type integer 'phrasesCounter' has been declared to count number of phrases
	do {
		printf("Type a few phrases seperated by comma (q - to quit):\n"); // this prints the message to prompt the user to enter words seperated by spaces or q to quit
		fgets(phrases, BUFFER_SIZE, stdin); // Get user input data
		phrases[strlen(phrases) - 1] = '\0'; // Remove the newline character with null terminator at the end of string
		if (strcmp(phrases, "q") != 0) { // Check if input is not 'q'
			char* context;
			nextPhrase = strtok_s(phrases, ",",&context); // Tokenize input string using comma as delimiter
			phrasesCounter = 1; // Initialize phrase counter
			while (nextPhrase) { // Iterate through tokenized phrases
				printf("Phrase #%d is \'%s\'\n", phrasesCounter++, nextPhrase); // Print phrase and its count
				nextPhrase = strtok_s(NULL, ",", &context); // Move to the next token
			}
		}
	} while (strcmp(phrases, "q") != 0); // Continue loop until input is 'q'
	printf("*** End of Tokenizing Words Demo ***\n\n"); // Print end message




//V3
 // This is where function definition begins
	printf("*** Start of Tokenizing Sentences Demo ***\n"); //this prints the message which is in the double quotes
	char sentences[BUFFER_SIZE]; // an array of type character 'sentences' has been declared of size 300
	char* nextSentence = NULL;  // a pointer of type char 'sentences' has been declared
	int	sentencesCounter; // an variable of type integer 'sentencesCounter' has been declared to count number of sentences
	do {
		printf("Type a few sentences seperated by dot (q - to quit):\n"); // this prints the message to prompt the user to enter sentences seperated by dot or q to quit
		fgets(sentences, BUFFER_SIZE, stdin); // Get user input data
		sentences[strlen(sentences) - 1] = '\0'; // Remove the newline character with null terminator at the end of string
		if (strcmp(sentences, "q") != 0) { // Check if input is not 'q'
			nextSentence = strtok(sentences, "."); // Tokenize input string using dot as delimiter
			sentencesCounter = 1; // Initialize sentence counter
			while (nextSentence) { // Iterate through tokenized sentences
				printf("Word #%d is \'%s\'\n", sentencesCounter++, nextSentence); // Print sentences and its count
				nextSentence = strtok(NULL, "."); // Move to the next token
			}
		}
	} while (strcmp(sentences, "q") != 0); // Continue loop until input is 'q'
	printf("*** End of Tokenizing Sentences Demo ***\n\n"); // Print end message
}
