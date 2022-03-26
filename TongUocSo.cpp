#include <stdio.h>

int a[2000005] = {0}, b[2000005] = {0};

int main()
{
	long long t, x, s = 0;
	scanf("%lld", &t);
	for (int i = 2; i  <= 2000005; i++)
		if (!a[i])
			for (int j = i; j <= 2000005; j += i)
			{
				int k = j;
				while (k % i == 0)
				{
					k /= i;
					b[j] += i;
				}
				a[j] = 1;
			}
	while (t--)
	{
		scanf("%lld", &x);
		s += b[x];
	}
	printf("%lld", s);
	return 0;
  }
