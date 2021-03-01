#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
	char m[1000], cap;
	bool cont = false, first = true;
	for (int i = 0; i < 1000; i++)
	{
		m[i] = ' ';
	}
	scanf("%s", m);
	for (int i = 0; i < 1000; i++)
	{
		// a an and at for i in of on the with
		if (first == true)
		{
			if (m[i] != ' ')
			{
				cap = m[i];
				first = false;
				
			}
			continue;
		}
		else if (m[i] == ' ')
		{
			printf("%c", cap-'a'+'A');
			first = true;
			continue;
		}
		if (m[0] == 'a' && m[1] == ' ')
		{
			cont = true;
			first = false;
			i++;
		}
		else if (m[0] == 'a' && m[1] == 'n' && m[2] == ' ')
		{
			cont = true;
			first = false;
			i++;
		}
	}
	return 0;
}
