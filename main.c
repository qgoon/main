#include <stdio.h>

double main (int argc, char* argv[])
{
	short i = 0;
	char str[100];
	
	scanf("%s", &str);
	while(str[i] != '\0')
	{
		short j = 0;
		while(str[j] != '\0')
		{
			if(str[i] == str[j+1] || str[i] == str[i+j])
			{
				break;
			}
			j++;
		
		}
		if(str[i] == str[j+1]) printf( "(" );
		else printf( ")" );
		j = 0;
		i++;
	}
}
