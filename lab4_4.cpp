#include <stdio.h>
#include <string.h>
int main()
{
	char message[1000] = {};
	scanf("%s", message);
	for (int i = 0; i < 1000; i++)
	{
		// a an and at for i in of on the with
		switch (message[i])
		{
			case 'a':
				switch (message[i+1])
				{
					case ' ':
						letter += 2;
						break;
					case 'n':
						switch (message[i+2])
						{
							case ' ':
								letter += 3;
								break;
							case 'd':
								switch (message[i+3])
								{
									case ' ':
										letter += 4;
										break;
								}
						}
					break;
				}
				break;
		}
	}
	return 0;
}
