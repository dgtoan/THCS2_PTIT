#include <stdio.h>
#include <math.h>
#include <string.h>

int ucln(int a, int b) {
    int tg;
    while (b != 0) {
        tg = a % b;
        a = b;
        b = tg;
    }
    return a;
}

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", ucln(a, b));
    }
    /* Toanr */
    return 0;
}
