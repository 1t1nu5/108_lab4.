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
	char search[50];
	int max = 49;
	strcpy(search, msg1);
	return 0;
}
