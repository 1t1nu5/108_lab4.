#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
	char message[1000] = {};
	bool cont = false;
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
						cont++;
						break;
					case 'n':
						switch (message[i+2])
						{
							case ' ':
								letter += 3;
								cont++;
								break;
							case 'd':
								switch (message[i+3])
								{
									case ' ':
										letter += 4;
										cont++;
										break;
								}
								break;
						}
						break;
					case 't':
						switch (message[i+2])
						{
							case ' ':
								letter += 3;
								cont++;
								break;
						}
						break;
				}
				break;
			case 'f':
				switch (message[i+1])
				{
					case 'o':
						switch (message[i+2])
						{
							case 'r':
								switch (message[i+3])
								{
									case ' ':
										letter += 4;
										cont++;
										break;
								}
								break;
						}
						break;
				}
				break;
			case 'i':
				switch (message[i+1])
				{
					case ' ':
						letter += 2;
						cont++;
						break;
					case 'n':
						switch (message[i+2])
						{
							case ' ':
								letter += 3;
								cont++;
								break;
						}
						break;
				}
				break;
			case 'o':
				switch (message[i+1])
				{
					case 'f':
						switch (message[i+2])
						{
							case ' ':
								letter += 3;
								cont++;
								break;
						}
						break;
					case 'n':
						switch (message[i+2])
						{
							case ' ':
								letter += 3;
								cont++;
								break;
						}
						break;
				}
				break;
			case 't':
				switch (message[i+1])
				{
					case 'h':
						switch (message[i+2])
						{
							case 'e':
								switch (message[i+3])
								{
									letter += 4;
									cont++;
								}
								break;
						}
						break;
				}
				break;
		}
	}
	if (cont == true)
	{
		cont--;
		continue;
	}
	return 0;
}
