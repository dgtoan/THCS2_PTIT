#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int m = i*2-1;
        for (int j = 1; j < m; j += 2)
            printf("%d", j);
        for (int j = m; j > 0; j -= 2)
            printf("%d", j);
        printf("\n");
    }
    
    //Toanr
    return 0;
}
