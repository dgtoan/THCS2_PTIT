#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a == 0)
    {
        if (b == 0)
        {
            printf("Vo so nghiem");
        }
        else
        {
            printf("Vo nghiem");
        }
    }
    else
    {
        printf("%.2lf", (double)(-b)/a);
    }
    
    // Toanr
    return 0;
}
