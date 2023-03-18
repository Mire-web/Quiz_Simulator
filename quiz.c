#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "./main.h"

/**
 * main - a quiz simulator
 *
 * Return: int
 */

int main(void)
{
	char userAnswer[10];
	int result;

	printf("1: What does printf statement in c do?\n\n");
	printf(" a: print element to console.\n b: send element to web.\n c: record element entered.\n d: show colors.\n");
	userAnswer[0] = getchar();
	getchar();
	answer_validator(userAnswer[0]);

	printf("2: What does scanf statement in c do?\n\n");
	printf(" a: print element to console.\n b: send element to web.\n c: record element entered.\n d: Take input from user.\n");
	userAnswer[1] = getchar();
	getchar();
	answer_validator(userAnswer[1]);

	printf("3: What does int *ptr mean?\n\n");
	printf(" a: pointer to an int.\n b: pointer.\n c: random variable.\n d: input data.\n");
	userAnswer[2] = getchar();
	getchar();
	answer_validator(userAnswer[2]);

	printf("4: What's the output of the code => printf(\"Hello %%d\", 3)?\n\n");
	printf(" a: Hello 3.\n b: Hel.\n c: Hello %%d Hello %%d Hello %%d.\n d: Hello.\n");
	userAnswer[3] = getchar();
	getchar();
	answer_validator(userAnswer[3]);

	printf("5: What does malloc() in c do?\n\n");
	printf(" a: wtf.\n b: statically allocate memory.\n c: Dynamically allocate memory.\n d: Take input from user.\n");
	userAnswer[4] = getchar();
	getchar();
	answer_validator(userAnswer[4]);

	printf("6: What does name[20] statement in c do?\n\n");
	printf(" a: print name 20 times.\n b: creates an array of size 20.\n c: replace name with 20.\n d: show colors.\n");
	userAnswer[5] = getchar();
	getchar();
	answer_validator(userAnswer[5]);

	printf("7: What does putchar statement in c do?\n\n");
	printf(" a: print element to console.\n b: return a string.\n c: print single char.\n d: Take input from user.\n");
	userAnswer[6] = getchar();
	getchar();
	answer_validator(userAnswer[6]);

	printf("8: What does int **ptr mean?\n\n");
	printf(" a: pointer to an int.\n b: pointer.\n c: random variable.\n d: a pointer to an int pointer.\n");
	userAnswer[7] = getchar();
	getchar();
	answer_validator(userAnswer[7]);

	printf("9: What's the output of the code => printf(\"%%d %%d %%d\", 2,4,3)?\n\n");
	printf(" a: 2 4 3.\n b: %%d %%d %%d.\n c: ddd.\n d: 243.\n");
	userAnswer[8] = getchar();
	getchar();
	answer_validator(userAnswer[8]);

	printf("10: What does realloc() in c do?\n\n");
	printf(" a: wtf.\n b: statically allocate memory.\n c: replace allocated memory.\n d: Take input from user.\n");
	userAnswer[9] = getchar();
	getchar();
	answer_validator(userAnswer[9]);

	printf("Calculating Score.."); //intentional delay to stimulate loader
	sleep(1);
	putchar('.');
	sleep(1);
	putchar('.');
	sleep(1);
	putchar('.');
	putchar('\n');
	printf("Loading Test score");
	sleep(1);
	putchar('.');
	sleep(1);
	putchar('.');
	sleep(1);
	putchar('.');
	putchar('\n');
	result = mark(userAnswer);
	printf("You Scored %d%%\n", result);
	printf("Grade: ");
	if (result >= 70)
		printf("EXCELLENT\n");
	else if (result < 70 && result >= 50)
		printf("PASSED\n");
	else if (result < 50)
		printf("BELOW AVERAGE\n");
	return (0);
}