//String having lenght almost 2.
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
			q = 1;
		else if (str[i] == 'a' && q == 1)
			q = 2;
		else if (str[i] == 'b' && q == 1)
			q = 2;
		else if (str[i] == 'a' && q == 2)
			q = 3;
		else if (str[i] == 'b' && q == 2)
			q = 3;
		else if (str[i] == 'a' && q == 3)
			q = 3;
		else if (str[i] == 'b' && q == 3)
			q = 3;
	}
	if (q == 0 || q == 1 || q == 2)
		printf("Given string is accepted\n");
	else
		printf("Given string is not accepted\n");
}
