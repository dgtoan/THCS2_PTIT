// code by Cao Viet Duc

#include <stdio.h>
#include <string.h>

void dichso(char n[], int sont, int sons) {
    int dis = sont - sons;
    for(int i = sont; i >= 0; i--) {
        if(i - dis >= 0) n[i] = n [i - dis];
        else n[i] = '0';
    }
}

void tru(char n1[], char n2[], char res[], int son) {
    int nho = 0;
    for(int i = son - 1; i >= 0; i--) {
        n1[i] -= nho;
        nho = 0;
        if(n1[i] >= n2[i]) res[i] = n1[i] - n2[i] + '0';
        else {
            //res[i] = n1[i] + 10 - n2[i];
            res[i] = (n1[i] - '0') + 10 - (n2[i] - '0') + '0';
            nho = 1;
        }
    }
}

int cmp(char n1[], char n2[], int son1, int son2) {
    if(son1 > son2) return 1;
    else if(son2 > son1) return 2;
    else {
        for(int i = 0; i < son1; i++) {
            if(n1[i] > n2[i]) return 1;
            else if(n1[i] < n2[i]) return 2;
        }
    }
    return 0;
}

int main() {
    int t = 0;
    scanf("%d\n", &t);
    while(t--) {
        char n1[10005] = {};
        char n2[10005] = {};
        char res[10005] = {};
        gets(n1); gets(n2);
        int son1 = strlen(n1);
        int son2 = strlen(n2);
        int son = son1 > son2 ? son1 : son2;
        if(son1 > son2) dichso(n2, son1, son2);
        else dichso(n1, son2, son1);
        if(cmp(n1, n2, son1, son2) == 1) tru(n1, n2, res, son);
        else if(cmp(n1, n2, son1, son2) == 2) tru(n2, n1, res, son);
        else {
            printf("0");
            break;
        }
        //printf("%s\n%s\n", n1, n2);
        int test = 0;
        for(int i = 0; i < son; i++) {
            while (test == 0 && res[i] == '0') {
                i++;
            }
            test = 1;
            printf("%c", res[i]);
        }
        printf("\n");
    }
}