/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>

void str_words_in_rev(char *input, int len){
	int i = 0,word, strt=0;
	char c;
	for (i = 0; i < len;i++)
	{
		if (input[i] == ' ')
		{
			word = i - 1;
			while (word >= strt)
			{
				c = input[strt];
				input[strt] = input[word];
				input[word] = c;
				word--;
				strt++;
			}
			strt = i + 1;
		}
		//i++;
	}
	word = len - 1;
	while (word >= strt)
	{
		c = input[strt];
		input[strt] = input[word];
		input[word] = c;
		word--;
		strt++;
	}
	word = len - 1;
	strt = 0;
	while (strt <= word)
	{
		c = input[strt];
		input[strt] = input[word];
		input[word] = c;
		word--;
		strt++;
	}

}
