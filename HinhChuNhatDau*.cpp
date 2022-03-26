#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = 0; i < a; i++) printf("*");
    printf("\n");
    for (int i = 0; i < b - 2; i++)
    {
        for (int i = 0; i < a; i++)
            if (i == 0 || i == a-1) printf("*");
            else printf(" ");
        printf("\n");
    }
    for (int i = 0; i < a; i++) printf("*");
    printf("\n");
    // Toanr
    return 0;
}
