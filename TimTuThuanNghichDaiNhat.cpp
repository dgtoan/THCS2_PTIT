#include <stdio.h>
#include <string.h>
// code by Cao Viet Duc

int isThuanNghich(char c[], int soc) {
    for(int i = 0; i < soc/2; i++) {
        if(c[i] != c[soc-i-1]) return 0;
    }
    return 1;
}

int search(char res[105][105], char c[], int index) {
    for(int i = 0; i < index; i++) {
        if(strcmp(c, res[i]) == 0) return i;
    } 
    return -1;
}

int main() {
    char s[10005] = {};
    char res[105][105] = {};
    int index = 0;
    int max = 0;
    int tick[10005] = {};
    while (gets(s)) {
        int sos = strlen(s);
        for(int i = 0; i < sos; i++) {
            int ind = 0;
            char c[1005] = {};
            while (s[i] != ' ' && i < sos) {
                c[ind++] = s[i++];
            }
            //printf("%s %d\n", c, isThuanNghich(c, ind));
            if(ind == max) {
                if(isThuanNghich(c, ind)) {
                    int s = search(res, c, index);
                    if(s != -1) {
                        tick[s]++;
                    } else {
                        tick[index]++;
                        strcpy(res[index++], c);
                    }
                }
            } else if(ind > max) {
                if(isThuanNghich(c, ind)) {
                    for(int j = 0; j < index; j++) strcpy(res[j], "");
                    for(int j = 0; j < index; j++) tick[j] = 0;
                    index = 0;
                    max = ind;
                    strcpy(res[index++], c);
                    tick[search(res, c, index)]++;
                }
            }
        }
        // printf("%s", res[0]);
    }
    for(int i = 0; i < index; i++) {
        printf("%s %d\n", res[i], tick[i]);
    }
}