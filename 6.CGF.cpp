#include <stdio.h>
#include <string.h>

int checkCFG(char *s, int start, int end) {
    if (start > end) return 1;
    if (s[start] == '0' && s[end] == '1') return checkCFG(s, start + 1, end - 1);
    return 0;
}

int main() {
    char s[100];
    scanf("%s", s);
    if (checkCFG(s, 0, strlen(s) - 1)) printf("Accepted\n");
    else printf("Rejected\n");
    return 0;
}
