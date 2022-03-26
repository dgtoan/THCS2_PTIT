#include <stdio.h>

int main() {
    int n, a[105], d = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
    {
        int kt = 0;
        for (int j = i+1; j < n; j++)
            if (a[j] < a[i])
            {
                int t = a[j];
                a[j] = a[i];
                a[i] = t;
                kt = 1;
            }
        if (kt)
        {
            printf("Buoc %d:", ++d);
            for (int i = 0; i < n; i++)
                printf(" %d", a[i]);
        }
        printf("\n");
    }
    //Toanr
    return 0;
}