#include <stdio.h>

int main(void)
{
	int n = 0, m, sum = 0 , kk =0;

	printf("please input m: ");
	scanf("%d", &m);

	for (n = 0; sum <= m; n++)
	{
		kk = sum ;
		sum = sum + n;
	}

	n = n - 2;
	printf("\nResult: n=%d, sum=%d\n", n, kk);

	return 0;
}
