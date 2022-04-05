#include <stdio.h>

int  main() {
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m, x, y, g, d,
        a[105][105],
        b[105][105] = {0};
        x = y = g = d = 0;
        y--;
        scanf("%d %d", &n, &m);
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                scanf("%d", &a[i][j]);
                b[i][j] = 1;
            }
        while (d < m * n)
        {
            switch (g)
            {
            case 0:
                y++;
                printf("%d ", a[x][y]);
                b[x][y] = 0;
                if (!b[x][y+1]) ++g;
                break;
            case 1:
                x++;
                printf("%d ", a[x][y]);
                b[x][y] = 0;
                if (!b[x+1][y]) ++g;
                break;
            case 2:
                y--;
                printf("%d ", a[x][y]);
                b[x][y] = 0;
                if (!b[x][y-1]) ++g;
                break;
            case 3:
                x--;
                printf("%d ", a[x][y]);
                b[x][y] = 0;
                if (!b[x-1][y]) g = 0;
                break;
            }
            d++;
        }
        printf("\n");
    }
    return 0;
}
