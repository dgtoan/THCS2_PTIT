#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) printf("*");
        printf("\n");
    }
    
    /* Toanr */
    return 0;
}
