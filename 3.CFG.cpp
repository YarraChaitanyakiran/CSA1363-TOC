#include <stdio.h>
#include <string.h>

int checkCFG(char *s) {
    int n = strlen(s), i, a_count = 0, b_count = 0;
    if (n < 2 || s[0] != '0' || s[n-1] != '1') return 0;
    for (i = 1; i < n-1; i++) if (s[i] == '0' || s[i] == '1') a_count++;
    return a_count == n-2;
}

int main() {
    char s[100];
    scanf("%s", s);
    if (checkCFG(s)) printf("Accepted\n");
    else printf("Rejected\n");
    return 0;
}
