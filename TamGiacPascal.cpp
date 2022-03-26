#include <stdio.h>
#include <math.h>

int result(int n, int k) {
    int t = 1, m = 1;
    for (int i = k+1; i <= n; i++)
        t *= i;
    for (int i = 2; i <= n-k; i++)
        m *= i;
    return t/m;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
            printf("%d ", result(i, j));
        printf("\n");
    }
    //Toanr
    return 0;
}