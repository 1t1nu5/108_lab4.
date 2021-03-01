#include <stdio.h>
#include <string.h>
void decap(char msg[])
{
	for (int i = 0; i < 50; i++)
	{
		if (msg[i] >= 'A' && msg[i] <= 'Z')
		{
			msg[i] += 'a' - 'A';
		}
	}
}
int main()
{
	char msg1[50], msg2[50], msg3[50], msg4[50];
	scanf("%s", msg1);
	decap(msg1);
	scanf("%s", msg2);
	decap(msg2);
	scanf("%s", msg3);
	decap(msg3);
	scanf("%s", msg4);
	decap(msg4);
	char search[50] = {};
	char tempsearch[50];
	int length, max, min;
	for (length = 49; length > 0; length--)
	{
		for (max = length; max <= 49; max++)
		{
			for (min = 0; min <= (length - max); min++)
			{
				strcpy(search, " ");
				for (int i = 0; i < max - min; i++)
				{
					tempsearch[i] = msg1[min+i];
				}
			}
		}
		if (strstr(tempsearch, msg1) != 0)
		{
			if (strcmp(search, tempsearch) > 0)
			{
				strcpy(search, tempsearch);
			}
		}
	}
	printf("%s", search);
	return 0;
}
