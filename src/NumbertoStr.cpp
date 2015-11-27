/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>

int tostri(char *str,int val, int start);
int tostri(char *str, int val, int start);
void number_to_str(float number, char *str, int afterdecimal){
	int start = 0;
	if (number < 0){ *(str + 0) = '-'; number = -number; ++start; }
	int num = (int)number;
	if (afterdecimal != 0)
	{
		float dec = number - num;
		while (afterdecimal != 0)
		{
			dec = dec * 10;
			afterdecimal--;
		}
		int size = tostri(str, num, start);
		*(str + (++size)) = '.';
		size = tostri(str, dec, ++size);
	}
	if (afterdecimal == 0)
	{
		int size = tostri(str, num, start);
	}

}

int tostri(char *str, int val, int start)
{
	int count = 0;
	if (val > 1000){ count = 3; }
	else
		if (val > 100){ count = 2; }
		else
			if (val > 10){ count = 1; }
	count = count + start;
	int siz = count;
	while (val > 10 && count > start)
	{
		int num = val % 10;
		val = val / 10;
		//	printf("%d --", count);
		*(str + count) = num + '0';
		--count;
	}
	*(str + count) = val + '0';
	return siz;
}