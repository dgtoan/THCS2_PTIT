#include <stdio.h>
#include <string.h>

int maxAscString(char src[]){
    int n = strlen(src);
    int len[105] = {};
    for (int i = n-1; i >=0; i--)
        for (int j = i+1; j < n; j++)
            if (src[i] < src[j] && len[i] < len[j] + 1)
                len[i] = len[j] + 1;

    n = len[0]-1;
    return n;
}

int main() {
    char s[10005];
    gets(s);
    int sos = strlen(s);
    for(int i = sos; i > 0; i--) {
        s[i] = s[i-1];
    }
    s[0] = 'a' - 1; 
    s[sos + 1] = 'z' + 1;
    printf("%d",26 - maxAscString(s));
}