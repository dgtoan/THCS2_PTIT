#include <stdio.h>
#include <string.h>
#include <math.h>

int a[1000005] = {0}, b[10005];

int nt (long long n) {
  if (n < 2) return 0;
  int can = sqrt(n);
  for (int i = 2; i <= can; ++i)
    if (n % i == 0) return 0;
  return 1;
}

int main()
{
  int t, d = 0;
  for (int i = 2; i*i < 1000005; i++)
        if (!a[i])
        {
            b[d++] = i;
            for (int j = i*i; j < 1000005; j += i)
                a[j] = 1;
        }
  scanf("%d ", &t);
  while (t--) {
    long long n;
    scanf("%lld", &n);
    if (nt(n))
    {
      printf("%lld\n", n);
      continue;
    }
    int can = sqrt(n), kt = 0;
    for (int i = 2; i <= can; ++i)
      if (n % i == 0)
      {
        long long q = n / i;
        if (nt(q))
        {
          printf("%lld\n", q);
          kt = 1;
          break; 
        }
      }
    if (!kt)
    {
      for (int i = can; i >= 2; --i)
        if (n % i == 0)
        {
          if (nt(i))
          {
            printf("%lld\n", i);
            break; 
          }
        }
    }
  }
  //Toanr
  return 0;
}
