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
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (ucln(a, b) == ucln(c, d)) printf("YES\n");
    else printf("NO\n");
  }
  
  //Toanr
  return 0;
}
