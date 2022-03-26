#include <stdio.h>
#include <string.h>
#include <math.h>

int nt (long long n) {
  if (n < 2) return 0;
  int can = sqrt(n);
  for (int i = 2; i <= can; ++i)
    if (n % i == 0) return 0;
  return 1;
}

int main()
{
  int n, d =0;
  scanf("%d", &n);
  for (long long i = 2; i < 10000000000000005; ++i)
    if (nt(i))
    {
      printf("%lld\n", i);
      if (++d == n) break;
    }
  
  //Toanr
  return 0;
}
