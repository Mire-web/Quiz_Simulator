#include <stdio.h>
#include <stdlib.h>


int mark(char *c)
{
	char correctAnswer[10] = {'a', 'd', 'a', 'a', 'c', 'b', 'c', 'd', 'a', 'c'};
	float final_score, score = 0;
	int i;
	for (i = 0; i < 10 ; i++)
	{
		if (correctAnswer[i] == c[i])
			score++;
	}
	final_score = (score / (sizeof(correctAnswer) / sizeof(char))) * 100;
	return (final_score);
}