#include <stdio.h>

int main() {
    int n, a[100], d = 0;
    scanf("%d", &n);
    if (!n) printf("0");
    while (n > 0)
    {
        a[d++] = n % 2;
        n /= 2;
    }
    for (int i = d-1; i >= 0; i--)
        printf("%d", a[i]);
    //Toanr
    return 0;
}
