#include <stdio.h>
#include <math.h>
#include <string.h>

int a[10000005] = {0}, b[100005];

int main() {
    int t, d = 0;
    scanf("%d ", &t);
    for (int i = 2; i*i < 10000005; i++)
        if (!a[i])
        {
            b[d++] = i;
            for (int j = i*i; j < 10000005; j += i)
                a[j] = 1;
        }
    while (t--) {
        int n;
        scanf("%d", &n);
        d = 0;
        while (n > 1)
        {
            if (b[d] == 0)
            {
                printf("%d\n", n);
                break;
            }
            
            if (n % b[d] == 0)
            {
                printf("%d ", b[d]);
                n = n / b[d];
            }
            else ++d;
        }
        printf("\n");
    }
    /* Toanr */
    return 0;
}
