#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n+5][n+5], k = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n-i-1; j++)
            a[i][j] = k++;
        for (int j = i; j < n-i-1; j++)
            a[j][n-i-1] = k++;
        for (int j = n-i-1; j > i; j--)
            a[n-i-1][j] = k++;
        for (int j = n-i-1; j > i; j--)
            a[j][i] = k++;
    }
    if (n%2)
        a[n/2][n/2] = n*n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");        
    }
    return 0;
}
