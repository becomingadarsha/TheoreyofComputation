#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char str[10];
	int len, i, q = 0;
	printf("enter the string which only contain a and b\n");
	scanf("%s", str);
	len = strlen(str);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == 'a' && q == 0)
			q = 1;
		else if (str[i] == 'b' && q == 0)
			q = 6;
		else if (str[i] == 'a' && q == 1)
			q = 6;
		else if (str[i] == 'b' && q == 1)
			q = 2;
		else if (str[i] == 'a' && q == 2)
			q = 3;
		else if (str[i] == 'b' && q == 2)
			q = 2;
		else if (str[i] == 'a' && q == 3)
			q = 3;
		else if (str[i] == 'b' && q == 3)
			q = 4;
		else if (str[i] == 'a' && q == 4)
			q = 3;
		else if (str[i] == 'b' && q == 4)
			q = 5;
		else if (str[i] == 'a' && q == 5)
			q = 3;
		else if (str[i] == 'b' && q == 5)
			q = 2;
		else if (str[i] == 'a' && q == 6)
			q = 6;
		else if (str[i] == 'b' && q == 6)
			q = 6;
	}
	if (q == 5)
		printf("Given string is accepted\n");
	else
		printf("Given string is not accepted\n");
}
