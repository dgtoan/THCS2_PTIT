#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
  int t;
  scanf("%d ", &t);
  while (t--) {
    int n, a[1005];
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    	scanf("%d", &a[i]);
    for (int i = 0; i < n; ++i)
    {
    	int kt = 1;
    	for (int j = i+1; j < n; ++j)
    		if (a[j] >= a[i])
    		{
    			kt = 0;
    			break;
    		}
    	if (kt) printf("%d ", a[i]);
    }
    printf("\n");
  }
  //Toanr
  return 0;
}
