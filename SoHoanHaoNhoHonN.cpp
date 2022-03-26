#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
  int n;
  scanf("%d", &n);
  if (n < 6) printf("\n");
  if (n >= 6 && n < 28) printf("6\n");
  if (n >= 28 && n < 496) printf("6 28\n");
  if (n >= 496 && n < 8128) printf("6 28 496\n");
  if (n >= 8128) printf("6 28 496 8128\n");
  //Toanr
  return 0;
}
