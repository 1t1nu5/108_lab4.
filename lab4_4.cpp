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
		}
		else if (m[i] == ' ')
		{
			printf("%c", cap-'a'+'A');
			first = true;
		}
		else if (m[i] == 'a' && m[i+1] == ' ')
		{
			cont = true;
			first = false;
			i++;
		}
		else if (m[i] == 'a' && m[i+1] == 'n' && m[i+2] == ' ')
		{
			cont = true;
			i += 2;
		}
		else if (m[i] == 'a' && m[i+1] == 'n' && m[i+2] == 'd' && m[i+3] == ' ')
		{
			cont = true;
			i += 3;
		}
		else if (m[i] == 'a' && m[i+1] == 't' && m[i+2] == ' ')
		{
			cont = true;
			i += 2;
		}
		else if (m[i] == 'f' && m[i+1] == 'o' && m[i+2] == 'r' && m[i+3] == ' ')
		{
			cont = true;
			i += 3;
		}
		else if (m[i] == 'i' && m[i+1] == ' ')
		{
			cont = true;
			i++;
		}
		else if (m[i] == 'i' && m[i+1] == 'n' && m[i+2] == ' ')
		{
			cont = true;
			i += 2;
		}
		else if (m[i] == 'o' && m[i+1] == 'f' && m[i+2] == ' ')
		{
			cont = true;
			i += 2;
		}
		else if (m[i] == 'o' && m[i+1] == 'n' && m[i+2] == ' ')
		{
			cont = true;
			i += 2;
		}
		else if (m[i] == 't' && m[i+1] == 'h' && m[i+2] == 'e' && m[i+3] == ' ')
		{
			cont = true;
			i += 3;
		}
		else if (m[i] == 'w' && m[i+1] == 'i' && m[i+2] == 't' && m[i+3] == 'h' && m[i+4] == ' ')
		{
			cont = true;
			i += 4;
		}
		if (cont == true)
		{
			cont = false;
			first = false;
		}
	}
	return 0;
}
