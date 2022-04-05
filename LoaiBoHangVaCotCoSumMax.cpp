#include <stdio.h>

int main() {
    int t, d = 1;
    scanf("%d", &t);
    while (t--)
    {
        int n, m,
        max = 0,
        x = 0,
        y = 0,
        a[105][105] = {0};
        scanf("%d%d", &n, &m);
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                scanf("%d", &a[i][j]);
                a[i][m] += a[i][j];
                if (a[i][m] > max)
                {
                    max = a[i][m];
                    x = i;
                }
            }
        max = 0;
        for (int i = 0; i < n; i++)
        {
            if (i == x)
                continue;
            for (int j = 0; j < m; j++)
            {
                a[n][j] += a[i][j];
                if (a[n][j] > max)
                {
                    max = a[n][j];
                    y = j;
                }
            }
        }
        printf("Test %d:\n", d++);
        for (int i = 0; i < n; i++)
        {
            if (i == x)
                continue;
            for (int j = 0; j < m; j++)
                if (j != y) printf("%d ", a[i][j]);
            printf("\n");
        }
    }
    return 0;
}
