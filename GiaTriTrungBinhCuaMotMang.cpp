#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
  long long n, s = 0, a;
  scanf("%lld", &n);
  for (int i = 0; i < n; ++i)
  {
  	scanf("%lld", &a);
  	s += a;
  }
  printf("%.3lf\n", (double)s/n);
  //Toanr
  return 0;
}
