#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int m = i*2;
        for (int j = 2; j < m; j += 2)
            printf("%c", j+62);
        for (int j = m; j > 0; j -= 2)
            printf("%c", j+62);
        printf("\n");
    }
    
    //Toanr
    return 0;
}