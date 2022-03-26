#include <stdio.h>
#include <math.h>
#define max(a, b) ( a > b ? a : b)
#define min(a, b) ( a < b ? a : b)

int main() {
    int a, b, c, d,
        x, y, z, t;
    scanf(
        "%d %d %d %d %d %d %d %d",
        &a, &b, &c, &d, &x, &y, &z, &t
    );
    int minX, minY, maxX, maxY;
    minX = min(min(a, c), min(x, z));
    minY = min(min(b, d), min(y, t));
    maxX = max(max(a, c), max(x, z));
    maxY = max(max(b, d), max(y, t));
    int s = max(maxX - minX, maxY - minY);
    printf("%d\n", s * s);
    return 0;
}
