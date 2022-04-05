#include <stdio.h>

int main() {
    int t, d = 1;
    scanf("%d", &t);
    while (t--)
    {
        int n, m,
        a[105][105],
        b[105][105],
        c[105][105] = {0};
        scanf("%d%d", &n, &m);
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                scanf("%d", &a[i][j]);
                b[j][i] = a[i][j];
            }
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                for (int z = 0; z < m; z++)
                    c[i][j] = c[i][j] + a[i][z] * b[z][j];
        printf("Test %d:\n", d++);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                printf("%d ", c[i][j]);
            printf("\n");
        }
    }
    return 0;
}
