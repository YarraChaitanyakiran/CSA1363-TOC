#include <stdio.h>
#include <stdbool.h>

#define STATES 4

bool eclosure[STATES][STATES];
bool visited[STATES];

void epsilonClosure(int state) {
    visited[state] = true;
    for (int i = 0; i < STATES; i++)
        if (eclosure[state][i] && !visited[i])
            epsilonClosure(i);
}

int main() {
    // Example e-transitions
    eclosure[0][1] = eclosure[1][2] = eclosure[2][3] = true;

    for (int i = 0; i < STATES; i++) {
        for (int j = 0; j < STATES; j++) visited[j] = false;
        epsilonClosure(i);
        printf("e-closure of %d: ", i);
        for (int j = 0; j < STATES; j++) if (visited[j]) printf("%d ", j);
        printf("\n");
    }
    return 0;
}
