#include <stdio.h>
#include <string.h>
int main()
{
	int ytotal, ycurrent;
	scanf("%d", ytotal);
	char receive[10], cut[3];
	int medal[3][ytotal] = {}, score, best, worst;
	for (int i = 0; i < ytotal; i++)
	{
		scanf("%s", receive);
		medal[0][i] = receive[0] - '0';
		medal[1][i] = receive[3] - '0';
		medal[2][i] = receive[5] = '0';
	}
	for (int i = 0; i < ytotal-3; i++)
	{
		score = 0;
		for (int i = 0; i < 3; i++)
		{
			score += medal[0][i]*4;
			score += medal[1][i]*2;
			score += medal[2][i];
		}
	}
	return 0;
}
