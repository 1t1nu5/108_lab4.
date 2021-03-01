#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
	char message[1000], cap;
	bool cont = false, first = true;
	for (int i = 0; i < 1000; i++)
	{
		message[i] = ' ';
	}
	scanf("%s", message);
	for (int i = 0; i < 1000; i++)
	{
		// a an and at for i in of on the with
		if (first == true)
		{
			if (message[i] != ' ')
			{
				cap = message[i];
				first = false;
				
			}
			continue;
		}
		else if (message[i] == ' ')
		{
			printf("%c", cap-'a'+'A');
			first = true;
			continue;
		}
		
	}
	return 0;
}
