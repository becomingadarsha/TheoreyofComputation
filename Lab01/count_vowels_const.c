#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	char s[100];
	int l, i = 0, countvowel = 0, countconsonant = 0, countdigit = 0, countwhitespaces = 0;
	printf("Enter a string:\n");
	gets(s);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
		{
			countvowel++;
		}
		else if (s[i] <= '9' && s[i] >= '0')
		{
			countdigit++;
		}
		else if (s[i] == ' ')
		{
			countwhitespaces++;
		}
		else if ((s[i] <= 'Z' && s[i] >= 'A') || (s[i] <= 'z' && s[i] >= 'a'))
		{
			countconsonant++;
		}
	}
	printf("\nVowel count = %d\nconsonant count= %d\ndigit count= %d\nwhitspaces count= %d\n", countvowel, countconsonant, countdigit, countwhitespaces);
	return 0;
}
