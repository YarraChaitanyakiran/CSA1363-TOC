#include <stdio.h>
#include <string.h>

int isAccepted(char *s) {
    int n = strlen(s);
    return n > 0 && s[0] == 'b' && s[n-1] == 'a';
}

int main() {
    char s[100];
    scanf("%s", s);
    if (isAccepted(s)) printf("Accepted\n");
    else printf("Rejected\n");
    return 0;
}
