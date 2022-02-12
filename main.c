#include <stdio.h>

double main (int argc, char* argv[])
{
	short i = 0;
	char str[100];
	
	scanf("%s", &str);
	while(str[i] != '\0')
	{
		short j   = 0,
		duplicate = 0;
		while(str[j] != '\0')
		{
			if(str[i] == str[j])
			{
				duplicate++;
				if(duplicate == 2)
				{
					printf( "(" );
					break;
				}
			}
			j++;
		}
		if(str[j] == '\0') printf( ")" );
		i++;
	}
}
