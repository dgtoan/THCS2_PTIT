#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
  int a[50];
  a[0] = 0;
  a[1] = 1;
  for (int i = 2; i < 45; ++i)
    a[i] = a[i-1] + a[i-2];
  int n;
  scanf("%d", &n);
  for (int i = 0; i < 45; ++i)
    if (n == a[i])
    {
      printf("1\n");
      return 0;
    }
  printf("0\n");
  //Toanr
  return 0;
}
