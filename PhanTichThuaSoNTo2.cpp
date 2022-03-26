#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
  int n, kt = 0;
  scanf("%d", &n);
  for( int i = 2; i <= n; i++ ){
    int d = 0;
    while( n % i == 0 ){
      ++d;
      n = n/i;
      if (kt) printf("x%d", i);
      else
      {
        printf("%d", i);
        kt = 1;
      }
    }
    if (n == 1) break;
  }
  //Toanr
  return 0;
}
