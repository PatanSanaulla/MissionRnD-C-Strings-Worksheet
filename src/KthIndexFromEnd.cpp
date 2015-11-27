/*
OVERVIEW: Given a string, return the Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/
# include <stdio.h>
char KthIndexFromEnd(char *str, int K) {
	int size = sizeof(str) / sizeof(str[0]);
		if (K < size || K > 0 || str!="NULL" ||str[0]!='\0')
	{
		return str[size - K - 1]; 
	}
	else{
		
		return '\0';
	}
}