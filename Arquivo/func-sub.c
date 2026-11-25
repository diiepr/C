#include <string.h>
#include <ctype.h>
char substr(char *string, char *string1, int ini, int fim)
{    int i;
	
    for (i=ini;i<=fim;i++)
	{
	   *string1=*(string+i-1);
	   string1++;
	}
    *string1='\0';	
}

char *rtrim(char *s)
{
    char* back = s + strlen(s);
    while(isspace(*--back));
    *(back+1) = '\0';
    return s;
}
