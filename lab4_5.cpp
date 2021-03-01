#include <stdio.h>
#include <string.h>
int main()
{
	unsigned int round;
	unsigned short int locate = 0;
	char swap[50];
	scanf("%d", &round);
	while (round > 0)
	{
		strcpy(swap, " ");
		scanf("%s", swap);
		for (int i = 0; i < 50 || swap[i] = ' '; i++)
		{
			switch (locate)
			{
				case 0:
					switch (swap[i])
					{
						case 'D':
							locate = 1;
							break;
						case 'C':
							locate = 2;
							break;
						case 'B':
						case 'E':
							locate = 3;
							break;
					}
					break;
				case 1:
					switch (swap[i])
					{
						case 'D':
							locate = 0;
							break;
						case 'A':
						case 'E':
							locate = 2;
							break;
						case 'C':
							locate = 3;
							break;
					}
					break;
				case 2:
					switch (swap[i])
					{
						case 'C':
							locate = 0;
							break;
						case 'A':
						case 'E':
							locate = 1;
							break;
						case 'D':
							locate = 3;
							break;
					}
					break;
				default:
					break;
			}
		}
		round--;
	}
	return 0;
}
