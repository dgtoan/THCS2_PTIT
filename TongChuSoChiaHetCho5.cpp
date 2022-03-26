#include <stdio.h>
#include <math.h>

int sum5(int n) {
    int s = 0;
    while (n > 0)
    {
        s += n % 10;
        n /= 10;
    }
    return !(s % 5);
}

int nt(int n) {
    int can = sqrt(n);
    for (int i = 2; i <= can; i++)
        if (!(n % i)) return 0;
    return 1;
}

int main() {
    int n, d = 0;
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
        if (sum5(i))
            if (nt(i))
            {
                printf("%d ", i);
                ++d;
            }
    printf("\n%d", d);
    //Toanr
    return 0;
}
