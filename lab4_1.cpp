#include <stdio.h>
#include <string.h>
struct
{
	public:
		int total;
		int current;
} year;
int main()
{
	scanf("%d", year.total);
	year.current = 0;
	char receive[100];
	int medal[3][year.total], score;
	for (int i = 0; i < year.total; i++)
	{
		scanf("%s", receive);
	}
	for (int i = 0; i < year.total-3; i++)
	{
		
	}
	return 0;
}
