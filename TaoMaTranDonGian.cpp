#include <stdio.h>
#include <math.h>
 
int main () {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int d = 1;
		for (int j = 0; j < n; j++)
			if (j <= i) printf("0 ");
			else printf("%d ", d++);
		printf("\n");
	}
	return 0;
}
