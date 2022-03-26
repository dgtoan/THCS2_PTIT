#include <stdio.h>
#include <math.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int n, a[105];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] < a[j]) swap(&a[i], &a[j]);
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    //Toanr
    return 0;
}
