#include <stdio.h>
#include <string.h>
#include <math.h>

int ucln(int a, int b) {
  while (a*b != 0) {
    int temp = a % b;
    a = b;
    b = temp;
  }
  return a + b;
}

int main()
{
  int a, b;
  scanf("%d %d", &a, &b);
  for (int i = a; i < b; ++i)
  for (int j = i+1; j <= b; ++j)
    if (ucln(i, j) == 1) printf("(%d,%d)\n", i, j);
  //Toanr
  return 0;
}
