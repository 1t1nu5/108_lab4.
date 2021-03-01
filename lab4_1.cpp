#include <stdio.h>
#include <string.h>
int main()
{
	int ytotal, ycurrent;
	scanf("%d", &ytotal);
	char receive[10], cut[3];
	int medal[3][ytotal], score, best = 0, worst = 2000;
	for (int i = 0; i <= ytotal; i++)
	{
		scanf("%s", receive);
		medal[0][i] = receive[0] - '0';
		medal[1][i] = receive[3] - '0';
		medal[2][i] = receive[5] = '0';
	}
	for (int i = 0; i <= ytotal-3; i++)
	{
		score = 0;
		for (int i = 0; i < 3; i++)
		{
			score += medal[0][i]*4;
			score += medal[1][i]*2;
			score += medal[2][i];
		}
		if (score > best)
		{
			best = score;
		}
		if (score < worst)
		{
			worst = score;
		}
	}
	printf("%d %d", best, worst);
	return 0;
}
