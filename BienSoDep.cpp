#include <stdio.h>

int tangdan(char s[]) {
    for (int i = 0; i < 4; i++)
        if (s[i] >= s[i+1]) return 0;
    return 1;
}

int bangnhau(char s[]) {
    for (int i = 0; i < 4; i++)
        if (s[i] != s[i+1]) return 0;
    return 1;
}

int bang23(char s[]) {
    for (int i = 0; i < 2; i++)
        if (s[i] != s[i+1]) return 0;
    for (int i = 3; i < 4; i++)
        if (s[i] != s[i+1]) return 0;
    return 1;
}

int all68(char s[]) {
    for (int i = 0; i < 5; i++)
        if (s[i] != '6' && s[i] != '8')
            return 0;
    return 1;
}

int check(char s[]) {
    if (tangdan(s)) return 1;
    if (bangnhau(s)) return 1;
    if (bang23(s)) return 1;
    if (all68(s)) return 1;
    return 0;
}

int main() {
    int n;
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++)
    {
        char s[50], x[50];
        gets(x);
        s[0] = x[6];
        s[1] = x[7];
        s[2] = x[8];
        s[3] = x[10];
        s[4] = x[11];
        if (check(s)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
