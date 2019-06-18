#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	int i, j;
	char str[10][50], temp[50];
	printf("Enter 5 words:\n");
	for (i = 0; i < 5; ++i)
		scanf("%s[^\n]", str[i]);
	for (i = 0; i < 4; ++i)
		for (j = i + 1; j < 5; ++j)
		{
			if (strcmp(str[i], str[j]) > 0)
			{
				strcpy(temp, str[i]);
				strcpy(str[i], str[j]);
				strcpy(str[j], temp);
			}
		}
	printf("\nIn dictionary order: \n");
	for (i = 0; i < 5; ++i)
	{
		puts(str[i]);
	}
	return 0;
}
