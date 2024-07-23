#include <stdio.h>
#include <string.h>

int checkA(char *s, int start, int end) {
    for (int i = start; i <= end; i++)
        if (s[i] != '1') return 0;
    return 1;
}

int checkS(char *s, int start, int end) {
    if (start > end) return 1;
    if (s[start] == '0' && s[end] == '0') return checkS(s, start + 1, end - 1);
    return checkA(s, start, end);
}

int main() {
    char s[100];
    scanf("%s", s);
    if (checkS(s, 0, strlen(s) - 1)) printf("Accepted\n");
    else printf("Rejected\n");
    return 0;
}
