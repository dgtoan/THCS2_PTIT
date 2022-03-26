#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("%d", j*2-(i%2));
        printf("\n");
    }
    
    //Toanr
    return 0;
}
