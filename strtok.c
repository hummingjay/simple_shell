#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - getline reads entire line of input to tell apart
 * different parts of the input, it will extract tokens from
 * stringd
 *
 * char *strtok(char *str, const char *delim)
 * delimiter - mark/symbol to show the beginning or end of
 * seperate elements
 *
 * Return 0
 */
int main(void)
{
	/*char str[] = "Come in you";*/
	char *delim = " ";
	char *token;

	/**
	 * now using assignment of memory use pointer to str
	 * without memory assignment will lead to segmentation fault
	 */
	char *src = "Come on in you";
	char *str = malloc(sizeof(char) * strlen(src));
	/*copy from source to destination*/
	strcpy(str, src);

	/**
	 * This alone Output: Come
	 * token = strtok(str, delim);
	 * printf("%s ", token);
	 * Second run Output: Come in
	 * token = strtok(NULL, delim);
	 * printf("%s\n", token);
	 */

	/*Using a loop instead since the return value is pointer to next or Null*/
	token = strtok(str, delim);

	while(token)
	{
		printf("%s\n", token);
		token = strtok(NULL, delim);
	}

	return (0);
}
