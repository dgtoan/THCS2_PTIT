#include <stdio.h>

int main() {
    int n, d = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2)
            for (int j = d; j < d+i; j++)
                printf("%d ", j);
        else
            for (int j = d+i-1; j >= d; j--)
                printf("%d ", j);
        d += i;
        printf("\n");
    }
    
    //Toanr
    return 0;
}