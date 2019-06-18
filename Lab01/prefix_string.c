#include <stdio.h>
#include <string.h>
int main()
{
	char a[10];
	int l, i, j;
	printf("Enter the string : ");
	scanf("%s", &a);
	l = strlen(a);
	for (i = 0; i <= l; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf("%c", a[j]);
		}
		printf("\n");
	}
	return 0;
}
