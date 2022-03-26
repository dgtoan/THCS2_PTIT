#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n, z = 0, a[10005] = {0};
    scanf("%d", &n);
    for( int i = 2; i <= n; i++ ){
      int d = 0;
      while( n % i == 0 ){
        ++d;
        n = n/i;
        if (i != a[z]) a[++z] = i;
      }
      if (n == 1) break;
    }
    int s = 1;
    for (int i = 1; i <= z; i++)
      s *= a[i];
    printf("%d\n", s); 
  }
  //Toanr
  return 0;
}
