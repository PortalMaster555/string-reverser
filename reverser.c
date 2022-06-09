#include <stdio.h>

#define MAX_STRING_LEN 32

char origString[MAX_STRING_LEN];
char revString[MAX_STRING_LEN];
int main (int argc, char **argv)
{
	printf("Input a string to be reversed: ");
	fgets(origString, MAX_STRING_LEN, stdin);
	origString[sizeof(origString) - 1] = '\0';
	printf("The string you typed was %s", origString);
	return 0;
}
