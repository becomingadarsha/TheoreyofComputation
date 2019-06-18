#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char str[10];
	int len, i, q = 0;
	printf("enter the string which only contain 0 and 1\n");
	scanf("%s", str);
	len = strlen(str);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == '0' && q == 0)
			q = 1;
		else if (str[i] == '1' && q == 0)
			q = 0;
		else if (str[i] == '1' && q == 1)
			q = 2;
		else if (str[i] == '0' && q == 1)
			q = 1;
		else if (str[i] == '0' && q == 2)
			q = 1;
		else if (str[i] == '1' && q == 2)
			q = 3;
		else if (str[i] == '1' && q == 3)
			q = 0;
		else if (str[i] == '0' && q == 3)
			q = 1;
	}
	if (q == 3)
		printf("Given string is accepted\n");
	else
		printf("Given string is not accepted\n");
}
