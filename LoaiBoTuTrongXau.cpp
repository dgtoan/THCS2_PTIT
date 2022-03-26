#include <stdio.h>
#include <string.h>

int main()
{
  char a[105], b[105];
  gets(a);
  gets(b);
  int la = strlen(a), lb = strlen(b);
  for (int i = 0; i < la; i++)
  {
    int kt = 0, z = i;
    for (int j = 0; j < lb; j++)
      if (b[j] != a[z++]) kt = 1;
    if (kt) printf("%c", a[i]);
    else i = z-1;
  }
  return 0;
}
