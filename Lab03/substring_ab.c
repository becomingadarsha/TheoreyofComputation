#include <stdio.h>
#include <math.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char s[100];
    int i = 0, q = 0, l;
    printf("Enter stringover {a,b}:\n");
    scanf("%s", s);
    l = strlen(s);
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'a' && q == 0)
        {
            if (s[i + 1] == 'b')
                q = 1;
            else
                q = 0;
        }
        else if (q == 1 && s[i] == 'a')
            break;
        else if (s[i] == 'b' && q == 0)
            q = 0;
        else if (s[i] == 'b' && q == 1)
            q = 2;
        else if (s[i] == 'a' && q == 2)
            q = 2;
        else if (s[i] == 'b' && q == 2)
            q = 2;
    }
    if (q == 2)
    {
        printf("Accepted.\n\n");
    }
    else
        printf("Rejected.");
    return 0;
}