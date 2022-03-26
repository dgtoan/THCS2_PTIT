#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    int n, a[105];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = n-1; i >= 0; i--) printf("%d ", a[i]);  
    // Toanr
    return 0;
}
