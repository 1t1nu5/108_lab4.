#include <stdio.h>
#include <string.h>
int main()
{
	char print[200] = {}, result[200];
	scanf("%s", print);
	for (int i = 199; i > 0; i--)
	{
		if (print[i] == print[i-1])
		{
			print[i] = ' ';
		}
	}
	for (int i = 0; i < 200; i++)
	{
		
	}
	return 0;
}
