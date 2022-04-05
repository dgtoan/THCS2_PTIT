#include <stdio.h>

int main() {
    int t, d = 1;
    scanf("%d", &t);
    while (t--)
    {
        int n,
        a[105][105] = {0},
        b[105][105] = {0},
        c[105][105] = {0};
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
            for (int j = 0; j <= i; j++)
            {
                a[i][j] = j + 1;
                b[j][i] = a[i][j];
            }
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                for (int z = 0; z < n; z++)
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
