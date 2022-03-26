#include <stdio.h>
#include <string.h>
#include <math.h>

int a[1000005] = {0};

int main()
{
  a[6] = 1;
  a[28] = 1;
  a[496] = 1;
  a[8128] = 1;
  int l, r;
  scanf("%d %d", &l, &r);
  if (l > r)
  {
    int temp = l;
    l = r;
    r = temp;
  }
  for (int i = l; i <= r; ++i)
    if (a[i]) printf("%d ", i);
  //Toanr
  return 0;
}
