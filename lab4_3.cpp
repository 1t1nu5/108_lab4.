#include <stdio.h>
#include <string.h>
int main()
{
	char print[200] = {};
	scanf("%s", print);
	for (int i = 199; i > 0; i--)
	{
		if (print[i] == print[i-1])
		{
			print[i] = ' ';
		}
	}
	
	return 0;
}
