#include <stdio.h>
#include <string.h>
#include <math.h>

int check(int n) {
  int c1 = n % 10, c2;
  n /= 10;
  do {
    c2 = n % 10;
    n /= 10;
    if (c1 < c2) return 0;
    c1 = c2;
  } while (n > 0);
  return 1;
}

int main()
{
  int t;
  scanf("%d ", &t);
  while (t--) {
    int n;
    scanf("%d", &n);
    int l = (int)pow(10,(n-1)),
        r = (int)pow(10,(n))-1;
    for (int i = l; i <= r; ++i)
      if (check(i)) printf("%d ", i);
    printf("\n");
  }
  
  //Toanr
  return 0;
}
