#include <stdio.h>
#include "sum.h"

int sum(int n)
{
	int sum = 0 , i ;
	for (int i = 0; i < n; ++i)
		sum += n;
	return sum;
}