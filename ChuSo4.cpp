#include <stdio.h>
#include <string.h>
#include <math.h>

int check(int n) {
  int s = 0, d = 0, x = n;
  while (n > 0) {
    int c = n % 10;
    if (c == 4) return 0;
    s += c;
    d = d * 10 + c;
    n /= 10;
  }
  return (!(s%10)) && (d == x);
}

int main()
{
  int t;
  scanf("%d ", &t);
  while (t--) {
    int n;
    scanf("%d", &n);
    int l = (int)pow(10, n-1),
        r = (int)pow(10, n);
    for (int i = l; i < r; ++i)
      if (check(i)) printf("%d ", i);
    printf("\n");
  }
  //Toanr
  return 0;
}
