#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    int n, s = 0;
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
        if (n%i == 0) s += i;
    int d = (s == n) ? 1 : 0;
    printf("%d\n", d);
    // Toanr
    return 0;
}
