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
			i += 2;
		}
		else if (m[0] == 'a' && m[1] == 'n' && m[2] == 'd' && m[3] == ' ')
		{
			cont = true;
			i += 3;
		}
		else if (m[0] == 'a' && m[1] == 't' && m[2] == ' ')
		{
			cont = true;
			i += 2;
		}
		else if (m[0] == 'f' && m[1] == 'o' && m[2] == 'r' && m[3] == ' ')
		{
			cont = true;
			i += 3;
		}
		else if (m[0] == 'i' && m[3] == ' ')
		{
			cont = true;
			i++;
		}
		else if (m[0] == 'i' && m[1] == 'n' && m[2] == ' ')
		{
			cont = true;
			i += 2;
		}
		else if (m[0] == 'o' && m[1] == 'f' && m[2] == ' ')
		{
			cont = true;
			i += 2;
		}
		else if (m[0] == 'o' && m[1] == 'n' && m[2] == ' ')
		{
			cont = true;
			i += 2;
		}
		else if (m[0] == 't' && m[1] == 'h' && m[2] == 'e' && m[3] == ' ')
		{
			cont = true;
			i += 3;
		}
		else if (m[0] == 'w' && m[1] == 'i' && m[2] == 't' && m[3] == 'h' && m[4] == ' ')
		{
			cont = true;
			i += 4;
		}
		if (cont == true)
		{
			first = false;
			continue;
		}
	}
	return 0;
}
