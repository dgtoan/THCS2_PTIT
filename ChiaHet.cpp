#include <stdio.h>

int main() {
    int n, k, d = 0;
    scanf("%d %d", &n, &k);
    for (int i = 2; i <= n; i++)
    {
        int x = i;
        while (x % 2 == 0)
        {
            d++;
            x /= 2;
        }
    }
    if (d >= k) printf("Yes\n");
    else printf("No\n");
    return 0;
}