#include <stdio.h>
#include <string.h>
#include <math.h>

int a[10000005] = {0};

int main()
{
  a[1] = 1;
  a[2] = 1;
  a[145] = 1;
  a[40585] = 1;
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
