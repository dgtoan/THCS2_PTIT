// code by Cao Viet Duc

#include <stdio.h>
#include <string.h>

int search(char c[], char s, int start, int end) {
    for(int i = start; i <= end; i++) {
        if(c[i] == s) return i;
    }
    return -1;
}

//ABCABCDDEEFFGGHHIIJJKKLLMMNNOOPPQQRRSSTTUUVVWWXXYYZZ


int main() {
    char c[60] = {};
    int res = 0;
    gets(c);
    int a[100] = {};
    for(int i = 0; i < 52; i++) {
        if(a[c[i]] == 0) {
            a[c[i]]++;
            int ind1 = i;
            int ind2 = search(c, c[i], i + 1, 51);
            int check[100] = {};
            for(int j = ind1 + 1; j < ind2; j++) {
                if(check[c[j]] == 0) {
                    check[c[j]]++;
                    if(search(c, c[j], j + 1, ind2 - 1) == -1) res++;
                }
            }
        }
    }
    printf("%d", res / 2);
}