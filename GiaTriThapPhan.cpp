#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    int t;
    scanf("%d ", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        printf("%.15f\n", 1.0/n);
    }
    // Toanr
    return 0;
}
