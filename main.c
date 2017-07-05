#include <stdio.h>
#include "sum.h"

int main()
{

	int n , temp;
	printf("정수를 입력하시오 :");
	scanf("%d", &n);
	temp = sum(n);
	printf("%d" , temp);;
	return 0;
}