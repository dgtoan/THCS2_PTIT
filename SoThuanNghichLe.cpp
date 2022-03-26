#include <stdio.h>
#include <string.h>
#include <math.h>

int check (long long n) {
  long long d = 0, x = n, s = 0;
  while (n > 0) {
    long long c = n % 10;
    s += c;
    if (c%2 == 0) return 0;
    d = d*10 + c;
    n /= 10;
  }
  return (d == x) && (s%2 == 1);
}

int main()
{
  int t;
  scanf("%d ", &t);
  while (t--) {
    long long n;
    scanf("%lld", &n);
    if (check(n)) printf("YES\n");
    else printf("NO\n");
  }
  
  //Toanr
  return 0;
}
