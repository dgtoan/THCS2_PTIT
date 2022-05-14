#include <stdio.h>
#include <string.h>
// code by Cao Viet Duc

void rot(char c[], int soc) {
    c[soc] = c[0];
    for(int i = 0; i < soc; i++) {
        c[i] = c[i + 1];
    }
    c[soc] = '\0';
}


int getDist(char c[], char s[], int sos) {
    for(int i = 0; i < sos; i++) {
        int test = 0;
        if(c[i] == s[0]) {
            int j = i;
            while (c[j] == s[j - i] && j < sos) {
                if(j == sos - 1) test = 1;
                j++;
            }
            if(test) {
                for(int z = 0; z < i; z++) {
                    if(c[z] != s[j - i + z]) {
                        test = 0;
                        break;
                    }
                }
            }
            if(test) return i;
        }
    }
    return -1;
}

int main() {
    int res = 10000000;
    int test = 1;
    int n = 0;
    scanf("%d", &n);
    char c[55][55] = {};
    int a[55] = {};
    for(int i = 0; i < n; i++) {
        scanf("\n");
        gets(c[i]);
    }
    int soc = strlen(c[0]);
    char var[55] = {};
    strcpy(var, c[0]);
    for(int i = 0; i < soc; i++) {
        int cnt = 0;
        for(int j = 0; j < n; j++) {
            cnt += getDist(c[j], var, soc);
            if(getDist(c[j], var, soc) == -1) {
                printf("-1");
                return 0;
            }
            // printf("1");
            //printf("%d ", getDist(c[j], var, soc));
        }
        //printf("\n");
        // printf("%d\n", res);
        rot(var, soc);
        if(res > cnt) res = cnt;
    }
    printf("%d", res);
    return 0;
}
