#include <stdio.h>
#include <string.h>

char s1[30],s2[30];



char *strcat_p(char *s, char *t)
{
    while(*t)
    {
        t++;
    }

    while(*s)
    {
        *t = *s;
        s++;
        t++;
    }

    *t='\0';
}

int main()
{
    char str1[30], str2[30];

    printf("Input initial string: ");
    gets(str1);
    printf("Input string to be concatenated: ");
    gets(str2);

    strcat_p(str2, str1);

    printf("\nInitial string after concatenation: %s", str1);
}
