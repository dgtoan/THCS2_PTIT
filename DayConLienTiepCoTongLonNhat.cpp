#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
  int t;
  scanf("%d ", &t);
  while (t--) {
    long long n, a[100005];
    scanf("%lld", &n);
    for (int i = 0; i < n; ++i)
    	scanf("%lld", &a[i]);
    long long max = a[0], s = 0;
    for (int i = 0; i < n; ++i)
    {
    	s = (s+a[i] >= a[i]) ? s + a[i] : a[i];
    	max = (s > max) ? s : max;
    }
    printf("%lld\n", max);
  }
  //Toanr
  return 0;
}
