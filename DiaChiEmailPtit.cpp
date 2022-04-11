#include <stdio.h>
#include <string.h>

int main() {
    char s[105] = " ", xau[105];
    gets(xau);
    strcat(s, xau);
    int n = strlen(s);
    for (int i = 1; i < n; i++)
    {
        if ('A' <= s[i] && s[i] <= 'Z')
            s[i] += 32;
        if (s[i] != ' ' && s[i-1] == ' ')
            printf("%c", s[i]);
    }
    while (!(s[n-2] == ' ' && s[n-1] != ' '))
        n--;
    while (s[n] >= 'a' && s[n] <= 'z')
        printf("%c", s[n++]);
    printf("@ptit.edu.vn\n");
    return 0;
}
