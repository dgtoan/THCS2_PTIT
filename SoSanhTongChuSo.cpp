#include <stdio.h>
#include <string.h>
#include <math.h>

int sum(int n) {
  int s = 0;
  while (n > 0) {
    s = s + (n%10);
    n /= 10;
  }
  return s;
}

int main()
{
  int a, b;
  scanf("%d %d", &a, &b);
  if (sum(a) > sum(b))
  {
    int temp = a;
    a = b;
    b = temp;
  }
  printf("%d %d\n", a, b);
  //Toanr
  return 0;
}
