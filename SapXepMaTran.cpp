#include <stdio.h>

int main()
{
    int t, p = 1;
    scanf("%d", &t);
    while(t--)
    {
        int m, n, i, j, x, y;
        scanf("%d %d", &m, &n);
        int a[100][100];
        for(i = 0; i < m; i++)
            for(j = 0; j < n; j++)
                scanf("%d", &a[i][j]);
        for(i = 0; i < m; i++)
            for(j = 0; j < n; j++)
                for(x = i; x < m; x++)
                    for(y = j; y < n; y++)
                        if(a[i][j] > a[x][y])
                        {
                            int temp = a[i][j];
                            a[i][j] = a[x][y];
                            a[x][y] = temp;
                        }
        printf("Test %d:\n",p++);
        for(i = 0; i < m; i++)
        {
            for(j = 0; j < n; j++)
                printf("%d ",a[i][j]);
            printf("\n");
        }
    }
}
