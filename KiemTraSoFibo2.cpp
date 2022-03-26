#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
  int t;
  scanf("%d ", &t);
  long long a[100000];
  a[0] = 0;
  a[1] = 1;
  for (int i = 2; i < 1001; ++i)
  	a[i] = a[i-1] + a[i-2];
  while (t--) {
    long long n, kt = 0;
    scanf("%lld", &n);
    for (int i = 0; i < 1001; ++i)
   		if (n == a[i])
   		{
   			kt = 1;
   			break;
   		}
   	if (kt) printf("YES\n");
   	else printf("NO\n");
  }
  
  //Toanr
  return 0;
}
