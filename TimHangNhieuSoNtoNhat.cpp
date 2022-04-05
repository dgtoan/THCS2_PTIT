#include <stdio.h>

int nt(int n) {
    if (n < 2) return 0;
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int main() {
    int n, a[100][100] = {0}, m = 0, x;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            if (nt(a[i][j]))
                a[i][n]++;
            if (a[i][n] > m)
            {
                m = a[i][n];
                x = i;
            }
        }
    printf("%d\n", x+1);
    for (int i = 0; i < n; i++)
        if (nt(a[x][i]))
            printf("%d ", a[x][i]);
    return 0;
}
