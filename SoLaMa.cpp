// code by Cao Viet Duc (luoi qua ma :v)

#include <stdio.h>
#include <string.h>

int convert(char c) {
    switch (c)
    {
    case 'I': return 1;
    case 'V': return 5;
    case 'X': return 10;
    case 'L': return 50;
    case 'C': return 100;
    case 'D': return 500;
    case 'M': return 1000;
    }
    return -1;
}

int main() {
    int t = 0;
    scanf("%d\n", &t);
    while(t--) {
        char n[100] = {};
        gets(n);
        int son = strlen(n);
        int res = 0;
        for(int i = 0; i < son; i++) {
            if(i != son - 1) {
                if(n[i] == 'I' && (n[i + 1] == 'V' || n[i + 1] == 'X')) res -= convert('I');
                else if(n[i] == 'X' && (n[i + 1] == 'L' || n[i + 1] == 'C')) res -= convert('X');
                else if(n[i] == 'C' && (n[i + 1] == 'D' || n[i + 1] == 'M')) res -= convert('C');
                else res += convert(n[i]);
            } else res += convert(n[i]);
        }
        printf("%d\n", res);
    }
}
