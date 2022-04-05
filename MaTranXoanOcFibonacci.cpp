#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n+5][n+5], k = 0, fb[100];
    fb[0] = 0;
    fb[1] = 1;
    for (int i = 2; i < 88; i++)
        fb[i] = fb[i-1] + fb[i-2];
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n-i-1; j++)
            a[i][j] = fb[k++];
        for (int j = i; j < n-i-1; j++)
            a[j][n-i-1] = fb[k++];
        for (int j = n-i-1; j > i; j--)
            a[n-i-1][j] = fb[k++];
        for (int j = n-i-1; j > i; j--)
            a[j][i] = fb[k++];
    }
    if (n%2)
        a[n/2][n/2] = fb[k];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");        
    }
    return 0;
}
