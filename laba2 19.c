#include <stdio.h>

int N, M;
int S[100];
int mas[100];

void recurs(int sum, int pred, int len) {
    if (sum == N) {
        printf("otvet - [");
        for (int i = 0; i < len; i++) {
            if (i == len - 1) {
                printf("%d", mas[i]);
            } else {
                printf("%d, ", mas[i]);
            }
        }
        printf("]\n");
        return;
    }

    if (sum > N) {
        return;
    }

    for (int i = 0; i < M; i++) {
        if (S[i] != pred) {
            mas[len] = S[i];
            recurs(sum + S[i], S[i], len + 1);
        }
    }
}

int main() {
    printf("Vvedite N: ");
    scanf("%d", &N);

    printf("Vvedite M: ");
    scanf("%d", &M);

    printf("Vvedite elementi S: ");
    for (int i = 0; i < M; i++) {
        scanf("%d", &S[i]);
    }

    recurs(0, -1, 0);

    return 0;
}
