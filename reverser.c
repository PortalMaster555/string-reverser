#include <stdio.h>
#include <string.h>

#define MAX_STRING_LEN 128

char origString[MAX_STRING_LEN];
char revString[MAX_STRING_LEN];
int main (int argc, char **argv)
{
	printf("Input a string to be reversed: ");
	
	fgets(origString, MAX_STRING_LEN, stdin);
	origString[strlen(origString) - 1] = '\0'; //newline begone
	
	printf("The string you typed was \"%s\".%c", origString, '\n'
);
	for(int i = 0; i < strlen(origString); i++)
	{
		revString[strlen(origString) - 1 - i] = origString[i];
	}
	printf("The reverse of that string is \"%s\".%c", revString, '\n');
	printf("Press ENTER to continue.");
	getchar();
	return 0;
}
