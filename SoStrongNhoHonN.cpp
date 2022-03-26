#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
  int n;
  scanf("%d", &n);
  if (n >= 40585) printf("1 2 145 40585\n");
  else if (n >= 145) printf("1 2 145\n");
  else if (n >= 2) printf("1 2\n");
  else if (n >= 1) printf("1\n");
  else printf("\n");
  //Toanr
  return 0;
}
