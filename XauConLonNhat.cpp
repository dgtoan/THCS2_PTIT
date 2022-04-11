#include <stdio.h>
#include <string.h>

void kt(char s[], int l, int n) {
    int k = l;
    for (int i = l+1; i < n; i++)
        if (s[i] > s[k]) k = i;
    printf("%c",s[k]);
    if (k < n) kt(s, k+1, n);
}

int main() {
    char s[100005];
    gets(s);
    kt(s, 0, strlen(s));
    return 0;
}
