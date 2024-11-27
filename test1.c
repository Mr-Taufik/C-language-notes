#include <stdio.h>
#include <math.h>

int isPrime(int num) {
	if (num < 2)
		return 0; // 0 和 1 不是素数
	int max_divisor = (int)sqrt((double)num);
	for (int i = 2; i <= max_divisor; i++) {
		if (num % i == 0)
			return 0; // 找到因子，非素数
	}
	return 1; // 无因子，素数
	///确保只有在所有可能的j都不整除i时，才将i判定为素数
}

int main()
{
	int count = 0;
	printf("打印200 - 300 之间的素数\n");

	for (int i = 200; i <= 300; i++)
	{
		if (isPrime(i))
		{
			printf("%d ", i);
			count++;
		}
	}

	printf("\n素数的总数量: %d\n", count);
	return 0;
}