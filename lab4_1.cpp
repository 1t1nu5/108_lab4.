#include <stdio.h>
struct
{
	int total;
	int current;
} year;
int main()
{
	scanf("%d", year.total);
	year.current = 0;
	return 0;
}
