#include <stdio.h>
#include <math.h>
#include <string.h>

void swap(int *a, int *b) {
    int m = *a;
    *a = *b;
    *b = m;
}

int main() {
    int a1, b1, a2, b2, a3, b3;
    scanf("%d %d\n%d %d\n%d %d",
        &a1, &b1, &a2, &b2, &a3, &b3);
    if (a1>b1) swap(&a1, &b1);
    if (a2>b2) swap(&a2, &b2);
    if (a3>b3) swap(&a3, &b3);
	if (
        (b1 == b2 && b2 == b3 && a1+a2+a3 == b1) ||
        (b3 == a3+b1 && b1 == a2 && b2+a1 == b3) ||
        (b3 == a1+a3 && b2 == a1 && b1+a2 == b3) ||
        (b3 == a3+b1 && b1 == b2 && a1+a2 == b3) ||
        (b3 == a1+a3 && a2 == a1 && b1+b2 == b3) ||
        (b2 == a2+b3 && a1 == b3 && b1+a3 == b2) ||
        (b2 == b1+b3 && a1 == a3 && a1+a2 == b2) ||
        (b2 == b1+a2 && b3 == b1 && a1+a3 == b2) ||
        (b2 == a2+b1 && a3 == b1 && a1+b3 == b2) ||
        (b1 == a1+a2 && a2 == b3 && a3+b2 == b1) ||
        (b1 == b2+a1 && b2 == a3 && b3+a2 == b1) ||
        (b1 == a1+b2 && b3 == b2 && a2+a3 == b1) ||
        (b1 == a1+a2 && a2 == a3 && b2+b3 == b1)
    )
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    };
    // Toanr
    return 0;
}
