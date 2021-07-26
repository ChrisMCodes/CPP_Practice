	/**************************************************************************
	 * 
	 * @author: ChrisMCodes
   *
	 * purpose: determine whether a string is a palindrome 
	 * 
	 * ***********************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {
    char sampleString[] = "Never odd or even";
    printf("%i\n", isPalindrome(sampleString));
    return EXIT_SUCCESS;
}
	/**************************************************************************
	 * 
	 * function: isPalindrome()
	 * 
	 * purpose: returns 1 if the string passed in is a palindrome
	 *                (not case-sensitive, ignores spaces);
	 *                otherwise, returns 0.
	 * 
	 * params: char word[] (string to check)
	 * 
	 * ***********************************************************************/
	int isPalindrome (char word[]) {

	    /* allocating memory for clean word (no spaces, all uppercase) */
	    char *cleanWord = malloc (sizeof(char) * strlen (word));

	    /* allocating space for reverse of cleanWord */
	    char *reverseWord = malloc (sizeof (char) * strlen (word));


	    /* functions to build cleanWord and reverseWord */
	    cleanWord = getCleanWord(cleanWord, word);
	    reverseWord = getReverseWord(reverseWord, cleanWord);
	  
	    /* compares cleanWord and reverseWord */
	    int palindrome = (strcmp (cleanWord, reverseWord) == 0) ? 1 : 0;

	    /* deallocating the heap memory used */
	    free(reverseWord);
	    free(cleanWord);
	  
	    return palindrome;
	}

	/**************************************************************************
	 * 
	 * function: getCleanWord()
	 * 
	 * purpose: returns cleanWord → word[] from isPalindrome()
	 *                with no spaces and in all uppercase.
	 * 
	 * params: char* cleanWord (pointer to memory for cleanWord)
	 *               char word[] (string to transform)
	 * 
	 * ***********************************************************************/
	char* getCleanWord(char* cleanWord, char word[]) {

	    /* pointer to beginning of cleanWord */
	    char* cleanPtr = cleanWord;

	    /* pointer to char in word */
	    char *currentChar = word;

	    /* copying word[] into cleanWord
	    eliminating spaces and transforming
	    all chars to uppercase */
	    while (*currentChar != '\0') {
		if (!isspace (*currentChar) {
		    *cleanPtr = toupper (*currentChar);
		    cleanPtr++;
		}
		
		currentChar++;
	    }
	    
	    return cleanWord;
	}

	/**************************************************************************
	 * 
	 * function: getReverseWord()
	 * 
	 * purpose: returns cleanWord in reverse
	 * 
	 * params: char* reverseWord (pointer to memory for cleanWord)
	 *               char* cleanWord (string to reverse)
	 * 
	 * ***********************************************************************/
	char* getReverseWord(char* reverseWord, char* cleanWord) {
	    /* points to beginning of reverseWord */  
	    char* reversePtr = reverseWord; 

	    /* iterates backwards through cleanWord */
	    for(int i = strlen(cleanWord); i >= 0; i--) {
		char* ptrToEnd = cleanWord + i - 1;
		*reversePtr = *ptrToEnd;
		reversePtr++;
	    }
	  
	    /* null-terminating reverseWord */
	    reversePtr--;
	    *reversePtr = '\0';

	    return reverseWord;
	}
