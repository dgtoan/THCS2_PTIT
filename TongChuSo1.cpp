#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    int n, s = 0;
    scanf("%d", &n);
    while (n > 0)
    {
        s = s + n % 10;
        n /= 10;
    }
    printf("%d\n", s);
    // Toanr
    return 0;
}
