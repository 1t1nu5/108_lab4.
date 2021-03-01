#include <stdio.h>
int main()
{
	int stack, *pstack = &stack, time, receive;
	scanf("%d", &time);
	while (time > 0)
	{
		scanf("%d", receive);
		switch (receive)
		{
			case '+':
				*pstack-1 += *pstack;
				*pstack = 0;
				pstack--;
				break;
			case '-':
				break;
			case '*':
				break;
			case '/':
				break;
		}
		time--;
	}
	return 0;
}
