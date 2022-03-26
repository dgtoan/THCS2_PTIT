#include <stdio.h>
#include <string.h>
#include <math.h>

long long ucln(long long a, long long b) {
  while (a*b != 0) {
    long long temp = a % b;
    a = b;
    b = temp;
  }
  return a + b;
}

int main()
{
  int t;
  scanf("%d ", &t);
  while (t--) {
    long long a, b;
    scanf("%lld %lld", &a, &b);
    long long u = ucln(a, b);
    printf("%lld %lld\n", a*b/u, u);
  }
  //Toanr
  return 0;
}
