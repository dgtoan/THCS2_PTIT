#include <stdio.h>
#include <math.h>
#include <string.h>

int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", min(a, min(b, c)));
    // Toanr
    return 0;
}
