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
		switch (message[i])
		{
			case 'a':
				switch (message[i+1])
				{
					case ' ':
						i++;
						cont++;
						break;
					case 'n':
						switch (message[i+2])
						{
							case ' ':
								i += 2;
								cont++;
								break;
							case 'd':
								switch (message[i+3])
								{
									case ' ':
										i += 3;
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
								i += 2;
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
										i += 3;
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
						i++;
						cont++;
						break;
					case 'n':
						switch (message[i+2])
						{
							case ' ':
								i += 2;
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
								i += 2;
								cont++;
								break;
						}
						break;
					case 'n':
						switch (message[i+2])
						{
							case ' ':
								i += 2;
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
									i += 3;
									cont++;
								}
								break;
						}
						break;
				}
				break;
			case 'w':
				switch (message[i+1])
				{
					case 'i':
						switch (message[i+2])
						{
							case 't':
								switch (message[i+3])
								{
									case 'h':
										switch (message[i+4])
										{
											case ' ':
												i += 4;
												cont++;
												break;
										}
										break;
								}
								break;
						}
						break;
				}
				break;
		}
		if (cont == true)
		{
			cont = false;
			first = true;
			continue;
		}
	}
	return 0;
}
