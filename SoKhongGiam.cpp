#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char s[20];
        scanf("\n");
        scanf("%s", s);
        int kt = 1, len = strlen(s);
        for (int i = 1; i < len; i++)
            if (s[i] < s[i-1]) kt = 0;
        if (kt) printf("YES\n");
        else printf("NO\n"); 
    }
    // Toanr
    return 0;
}
