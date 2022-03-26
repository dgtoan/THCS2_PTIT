#include <stdio.h>
#include <math.h>

int main()
{
    int t, d = 0;
    scanf("%d", &t);
    while (t--)
    {
        int n,m,  a[105][105];
        scanf("%d %d", &n, &m);
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                scanf("%d", &a[i][j]);
        printf("Test %d:\n", ++d);
        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j < m; j++)
                printf("%d ", a[i][j]);
            printf("\n");
        }
    }
    //Toanr
    return 0;
}
