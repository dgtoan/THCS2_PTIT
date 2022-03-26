#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    int a, b, s = 0;
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        int m = a;
        a = b;
        b = m;
    }
    for (int i = a; i <= b; i++)
        s += i;
    printf("%d\n", s); 
    return 0;
}
