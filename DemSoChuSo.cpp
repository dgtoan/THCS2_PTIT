#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n == 0) printf("0");
    else printf("%d\n", (int)log10(n) + 1);
    // Toanr
    return 0;
}
