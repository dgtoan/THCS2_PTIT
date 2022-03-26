#include <stdio.h>
#include <math.h>

int kt(int n) {
    int a[20], d = 0;
    while (n > 0)
    {
        a[++d] = n % 10;
        if (a[d] == 9) return 0;
        n /= 10;
    }
    for (int i = 1; i <= d/2; i++)
        if (a[i] != a[d-i+1]) return 0;
    return 1;
}

int main() {
    int n, d = 0;
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
        if (kt(i))
        {
            printf("%d ", i);
            ++d;
        }
    printf("\n%d", d);
    //Toanr
    return 0;
}
