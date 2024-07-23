#include <stdio.h>
#include <string.h>

int checkA(char *s, int start, int end) {
    for (int i = start; i <= end; i++)
        if (s[i] != '0' && s[i] != '1') return 0;
    return 1;
}

int checkCFG(char *s) {
    int n = strlen(s);
    if (n < 4 || s[n-4] != '1' || s[n-3] != '0' || s[n-2] != '1') return 0;
    return checkA(s, 0, n-5) && checkA(s, n-1, n-1);
}

int main() {
    char s[100];
    scanf("%s", s);
    if (checkCFG(s)) printf("Accepted\n");
    else printf("Rejected\n");
    return 0;
}
