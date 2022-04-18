// code by Cao Viet Duc

#include <stdio.h>
#include <string.h>

int search(char c[], char s[]) {
    int soc = strlen(c);
    int sos = strlen(s);
    for(int i = 0; i < soc; i++) {
        int ind = 0;
        while (c[i] >= 'a' && c[i] <= 'z' && i < soc && c[i] == s[ind]) {
           i++;
           ind++;
        }
        if(ind == sos && (c[i] == ' ' || i == soc)) {
            return i - sos;
        }
    }
    return -1;
}

void xoa(char s1[], int start, int sos1, int sos2) {
    for(int i = start; i < sos1; i++) {
        if(i + sos2 + 1 <= sos1) s1[i] = s1[i + sos2 + 1];
        else s1[i] = '\0';
    }
}

int main() {
    char s1[105], s2[105];
    gets(s1); gets(s2);
    int sos1 = strlen(s1);
    int sos2 = strlen(s2);
    for(int i = 0; i < sos2; i++) {
        char s3[105] = {};
        int ind = 0;
        while (s2[i] != ' ' && i < sos2) {
            s3[ind++] = s2[i++];
        }
        while (search(s1, s3) != -1) {
            xoa(s1, search(s1, s3) - 1, sos1, strlen(s3));
        }
    }
    char res[105][105] = {};
    int index = 0;
    sos1 = strlen(s1);
    for(int i = 0; i < sos1; i++) {
        int id = 0;
        while(s1[i] != ' ' && i < sos1) {
            res[index][id++] = s1[i++];
        }
        index++;
    }
    for(int i = 0; i < index - 1; i++) {
        for(int j = i + 1; j < index; j++) {
            if(strcmp(res[i], res[j]) > 0) {
                char var[105] = {};
                strcpy(var, res[i]);
                strcpy(res[i], res[j]);
                strcpy(res[j], var);
            }
        }
    }
    for(int i = 0; i < index - 1; i++) {
        if(strcmp(res[i], res[i + 1]) == 0) {
            strcpy(res[i], "");
        }
    }
    for(int i = 0; i < index; i++) {
        if(strcmp(res[i], "") != 0) printf("%s ", res[i]);
    }
}