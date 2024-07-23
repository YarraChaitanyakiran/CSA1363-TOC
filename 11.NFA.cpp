#include <stdio.h>

#define STATES 3
int eclosure[STATES][STATES] = {{1,1,0}, {0,1,1}, {0,0,1}}, visited[STATES] = {0};

void epsilonClosure(int state) {
    visited[state] = 1;
    for (int i = 0; i < STATES; i++)
        if (eclosure[state][i] && !visited[i]) epsilonClosure(i);
}

int main() {
    for (int i = 0; i < STATES; i++) {
        printf("e-closure of %d: ", i);
        for (int j = 0; j < STATES; j++) visited[j] = 0;
        epsilonClosure(i);
        for (int j = 0; j < STATES; j++) if (visited[j]) printf("%d ", j);
        printf("\n");
    }
    return 0;
}
