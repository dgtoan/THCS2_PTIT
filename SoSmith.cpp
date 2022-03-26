#include <stdio.h>

int sum(int n) {
  int s = 0;
  while (n > 0)
  {
    s += n%10;
    n /= 10;
  }
  return s;
}

int main()
{
  int n, s = 0, d = 2;
  scanf("%d", &n);
  int sn = sum(n);
  while (n > 1)
    if (n % d == 0)
    {
      s += sum(d);
      n /= d;
    }
    else d++;
  if (s == sn) printf("YES\n");
  else printf("NO\n");
  return 0;
}
