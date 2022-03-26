#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
        int d = n-1, k = i;
        for (int j = 1; j < i; j++)
        {
            printf("%d ", k + d);
            k += d;
            d--;
        }
        printf("\n");
    }
    
    //Toanr
    return 0;
}