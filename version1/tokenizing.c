// TOKENIZING MODULE SOURCE
#define _CTR_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300
#include "tokenizing.h" //this is to include tokenizing header file

// V1
void tokenizing(void) { //this is where the function defintion begins
	printf("*** Start of Tokenizing Words Demo ***\n"); //this prints the message which is in the double quotes
	char words[BUFFER_SIZE]; // an array of type character 'words' has been declared of size 200
	char* nextWord = NULL; // a pointer of type char 'word' has been declared
	int	wordsCounter; // an variable of type integer 'w_counter' has been declared 
	do {
		printf("Type a few words seperated by space (q - to quit):\n"); // this prints the message to prompt the user to enter words seperated by spaces or q to quit
		fgets(words, BUFFER_SIZE, stdin); // user indfput data
		words[strlen(words) - 1] = '\0';
		if (strcmp(words, "q") != 0) { // loop "p" and quit then
			nextWord = strtok(words, " "); // Tokenize input string
			wordsCounter = 1; // Initialize word counter

			while (nextWord) { // Iterate through tokenized words
				printf("Word #%d is \'%s\'\n", wordsCounter++, nextWord); // Print word and its count
				nextWord = strtok(NULL, " "); // Move to the next token
			}
		}
	} while (strcmp(words, "q") != 0); // Continue loop until input is 'q'

	printf("*** End of Tokenizing Words Demo ***\n\n"); // Print end message
}

/*V2
void tokenizing(void) {
	printf("*** Start of Tokenizing Words Demo ***\n");
	char phrases[BUFFER_SIZE];
	char* nextPhrase = NULL;
	int	phrasesCounter;
	do {
		printf("Type a few phrases seperated by space (q - to quit):\n");
		fgets(phrases, BUFFER_SIZE, stdin);
		phrases[strlen(phrases) - 1] = '\0';
		if (strcmp(phrases, "q") != 0) {
			nextPhrase = strtok(phrases, ",");
			phrasesCounter = 1;
			while (nextPhrase) {
				printf("Phrase #%d is \'%s\'\n", phrasesCounter++, nextPhrase);
				nextPhrase = strtok(NULL, ",");
			}
		}
	} while (strcmp(phrases, "q") != 0);
	printf("*** End of Tokenizing Words Demo ***\n\n");
}*/



/*V3
void tokenizing(void) {
	printf("*** Start of Tokenizing Words Demo ***\n");
	char sentences[BUFFER_SIZE];
	char* nextSentence = NULL;
	int	sentencesCounter;
	do {
		printf("Type a few sentences seperated by space (q - to quit):\n");
		fgets(sentences, BUFFER_SIZE, stdin);
		sentences[strlen(sentences) - 1] = '\0';
		if (strcmp(sentences, "q") != 0) {
			nextSentence = strtok(sentences, ".");
			sentencesCounter = 1;
			while (nextSentence) {
				printf("Word #%d is \'%s\'\n", sentencesCounter++, nextSentence);
				nextSentence = strtok(NULL, ".");
			}
		}
	} while (strcmp(sentences, "q") != 0);
	printf("*** End of Tokenizing Words Demo ***\n\n");
}*/