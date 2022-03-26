#include <stdio.h>
#include <string.h>

int main() {
    char s[20];
    scanf("%s", s);
    int a[300] = {0}, b[300] = {0};
    a['2'] = 1;
    a['3'] = 1;
    a['5'] = 1;
    a['7'] = 1;
    for (int i = 0; i < strlen(s); i++)
        if (a[s[i]]) b[s[i]]++;
    for (int i = 0; i < strlen(s); i++)
        if (b[s[i]])
        {
            printf("%c %d\n", s[i], b[s[i]]);
            b[s[i]] = 0;
        }
    //Toanr
    return 0;
}