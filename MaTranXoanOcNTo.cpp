#include <stdio.h>

int nt(int n) {
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int main() {
    int t, a[25][25], k = 0, p[10000], d = 1;
    for (int i = 2; i < 8888; i++)
        if (nt(i))
            p[k++] = i;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        k = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n-i-1; j++)
                a[i][j] = p[k++];
            for (int j = i; j < n-i-1; j++)
                a[j][n-i-1] = p[k++];
            for (int j = n-i-1; j > i; j--)
                a[n-i-1][j] = p[k++];
            for (int j = n-i-1; j > i; j--)
                a[j][i] = p[k++];
        }
        if (n%2)
            a[n/2][n/2] = p[k];
        printf("Test %d:\n", d++);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                printf("%d ", a[i][j]);
            printf("\n");        
        }
    }
    return 0;
}
