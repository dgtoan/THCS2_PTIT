#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d\n", &t);
    for (int j = 0; j < t; j++)
    {
        char s[1005];
        gets(s);
        int k = 0,
            n = strlen(s);
        for (int i = 0; i < n/2; i++)
            if (s[i] != s[n-i-1]) k++;
        if (k == 1 || (!k && strlen(s)%2)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
