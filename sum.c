#include <stdio.h>
#include "sum.h"

int sum(int n)
{
	int sum = 0 , i ;
	for (i = 0; i < n; ++i)
		sum += i;
	return sum;
}