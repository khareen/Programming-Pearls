#include<stdio.h>

int strToInt(char* str)
{
	int Int = 0;

	while( *str != '\0' )
	{
		if(*str > '0' && *str < '9')
		{ Int = (Int + *str - '0')*10;
		  str++;	
		}
		else {printf("Please enter a numerical string not an alphanumerical string!!");
			return -1;} // portable to only cases where EOF is '-1', instead use a non-negative number directly as no string literal has a non-negative ASCII mapping. 
	}
	Int /= 10;
return Int;
}
