#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%c ", i + 64);
        int d = n-1, k = i;
        for (int j = 1; j < i; j++)
        {
            printf("%c ", k + d + 64);
            k += d;
            d--;
        }
        printf("\n");
    }
    //Toanr
    return 0;
}
