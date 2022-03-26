#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
  int t;
    scanf("%d", &t);
    while(t--){
        int n, kt = 0;
        scanf("%d", &n);
        printf("%d = ", n);
        for( int i = 2; i <= n; i++ ){
            int d = 0;
            while( n % i == 0 ){
                ++d;
                n = n/i;
                if (n%i != 0)
                    if(kt) printf(" * %d^%d", i, d);
                    else
                    {
                        printf("%d^%d", i, d);
                        kt = 1;
                    }
            }
            if (n == 1) break;
        }
        printf("\n");
    }
  //Toanr
  return 0;
}
