#include <stdio.h>

int main() {
    int notas[5];

    for (int i = 0; i < 5; i++) {
        printf("Informe o %d valor: ", i+1);
        scanf("%d", &notas[i]);
    }
    return 0;
}
