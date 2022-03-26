#include <stdio.h>
#include <math.h>

int main() {
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int n;
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			printf("0\n");
			break;
		case 2:
			printf("1\n");
			break;
		case 3:
			printf("9\n");
			break;
		case 4:
			printf("18\n");
			break;
		case 5:
			printf("90\n");
			break;
		case 6:
			printf("180\n");
			break;
		case 7:
			printf("900\n");
			break;
		case 8:
			printf("1800\n");
			break;
		case 9:
			printf("9000\n");
			break;
		case 10:
			printf("0\n");
			break;
		}
	}
	//Toanr
	return 0;
}
