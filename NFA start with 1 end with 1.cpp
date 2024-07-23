#include <stdio.h>
#include <string.h>

int isAccepted(char *s) {
    int n = strlen(s);
    return n > 1 && s[0] == '1' && s[n-1] == '1';
}

int main() {
    char s[100];
    scanf("%s", s);
    if (isAccepted(s)) printf("Accepted\n");
    else printf("Rejected\n");
    return 0;
}
