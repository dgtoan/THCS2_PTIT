#include <stdio.h>
#include <string.h>

// Code duoc cai bien tu bai tim xau thuan nghich dai nhat nen dung hoi vi sao no lon xon nha
// code by Cao Viet Duc
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

                    int s = search(res, c, index);
                    if(s != -1) {
                        tick[s]++;
                    } else {
                        tick[index]++;
                        strcpy(res[index++], c);
                    }
                
            } else if(ind > max) {

                    for(int j = 0; j < index; j++) strcpy(res[j], "");
                    for(int j = 0; j < index; j++) tick[j] = 0;
                    index = 0;
                    max = ind;
                    strcpy(res[index++], c);
                    tick[search(res, c, index)]++;

            }
        }
        // for(int i = 0; i < index; i++) {
        //     printf("%s %d\n", res[i], tick[i]);
        // }
    }
    for(int i = 0; i < index; i++) {
        printf("%s %d %d\n", res[i], strlen(res[i]), tick[i]);
    }
}