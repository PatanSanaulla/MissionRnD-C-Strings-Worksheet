/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/
# include <stdio.h>
char removeSpaces(char *str) {
	int x = 0;
	if (str == NULL)
	{
		str[0] == '\0';
		
		return '\0';
	}
	else
		while (str[x] != '\0')
		{
			if (str[x] == ' ')
			{
				int y=x;
				while (str[y] != '\0')
				{
					str[y] = str[y + 1];
					y++;
				}
				--x;
			}
			x++;
		}
	 return '\0';
	
}