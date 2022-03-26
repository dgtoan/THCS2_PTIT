#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    int t;
    scanf("%d ", &t);
    while (t--)
    {
        int n, p, d = 0;
        scanf("%d %d", &n, &p);
        for (int i = 2; i <= n; i++)
        {
            int x = i;
            while (x % p == 0)
            {
                ++d;
                x /= p;
            }
        }
        printf("%d\n", d);
    }
    // Toanr
    return 0;
}
