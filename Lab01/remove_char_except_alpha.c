#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	char s[100], a[100];
	int l, j = 0, i = 0;
	printf("Enter a string:\n");
	gets(s);
	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] <= 'Z' && s[i] >= 'A') || (s[i] <= 'z' && s[i] >= 'a'))
		{
			a[j] = s[i];
			j++;
		}
	}
	printf("Removing all characters from string :\n");
	puts(a);
	return 0;
}
