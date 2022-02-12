#include <stdio.h>

double main (int argc, char* argv[])
{
	short i = 0;
	short count_vowels = 0;
	char array_vowels[5] = {'a', 'e', 'i', 'o', 'u'};
	char str[100];
	gets(str);
	while(str[i] != '\0')
	{
		short j = 0;
		while(array_vowels[j] != 4)
		{
			if(str[i] == ' ') break;
			if(array_vowels[j] == str[i])
			{
				count_vowels++;
				break;
			}
			j++;
		}
		i++;
	}
	printf("%d", count_vowels);
}
