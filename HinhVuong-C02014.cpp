#include <stdio.h>
#include <math.h>
#define max(a, b) ( a > b ? a : b)

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i < n*2; i++)
    {
        for (int j = 1; j < n*2; j++)
            printf("%d", max(abs(i-n), abs(j-n)) + 1);
        printf("\n");
    }
    //Toanr
    return 0;
}
