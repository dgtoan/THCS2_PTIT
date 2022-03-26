#include <stdio.h>
#include <math.h>

int main()
{
    int n, m, a[105][105];
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", a[j][i]);
        printf("\n");
    }
    //Toanr
    return 0;
}
