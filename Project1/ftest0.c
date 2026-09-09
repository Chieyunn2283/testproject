#include <stdio.h>

int addf(int a1, int a2)
{
	int sum = a1 + a2;
	return sum;
}
int static_ep(void)
{
	static id = 0;
	id++;
}