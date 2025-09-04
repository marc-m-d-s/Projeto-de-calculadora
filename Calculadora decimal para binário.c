#include <stdio.h>

int main() {
    int decimal, binario[32], i = 0, j;

    // 1. Pede o número decimal ao usuário
    printf("Digite um numero decimal: ");
    scanf("%d", &decimal);

    // 2. Lida com o caso especial de 0
    if (decimal == 0) {
        printf("O numero em binario e: 0\n");
        return 0;
    }

    // 3. Realiza a conversao por divisao sucessiva
    while (decimal > 0) {
        // Armazena o resto da divisao por 2
        binario[i] = decimal % 2;
        // Divide o numero por 2 para a proxima iteracao
        decimal = decimal / 2;
        i++;
    }

    // 4. Exibe o resultado (imprime o array de tras para frente)
    printf("O numero em binario e: ");
    for (j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
    printf("\n");

    return 0;
}