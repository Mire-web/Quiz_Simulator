#include <stdio.h>


void answer_validator(char c)
{
	while (c < 'A' || c > 'D' && c < 'a' || c > 'd') //check if user input is between letter a-d or A-D
	{
		printf("wrong input, try again\n");
		c = getchar();// get input on error
		getchar();//consume newline character
	}
}