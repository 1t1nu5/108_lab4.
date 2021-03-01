#include <stdio.h>
#include <string.h>
int main()
{
	char print[200] = {}, result[200] = {};
	scanf("%s", print);
	for (int i = 199; i > 0; i--)
	{
		if (print[i] == print[i-1])
		{
			print[i] = ' ';
		}
	}
	int letter = 0;
	for (int i = 0; i < 200; i++)
	{
		if (print[i] == ' ')
		{
			continue;
		}
		else
		{
			result[letter] = print[i];
			letter++;
		}
	}
	printf("%s", result);
	return 0;
}
