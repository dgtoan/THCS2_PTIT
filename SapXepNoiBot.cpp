#include <stdio.h>

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int main() {
    int n, a[105], dem = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
    {
        int kt = 0;
        for (int j = 1; j < n; j++)
            if (a[j-1] > a[j])
            {
                swap(&a[j-1], &a[j]);
                kt = 1;
            }
        if (kt)
        {
            printf("Buoc %d:", dem++);
            for (int j = 0; j < n; j++)
                printf(" %d", a[j]);
            printf("\n");
        }
    }
    
    return 0;
}
