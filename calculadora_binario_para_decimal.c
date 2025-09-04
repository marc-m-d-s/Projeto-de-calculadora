#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char binario[64];
    long long decimal = 0;
    int i, len;

    printf("Digite um numero binario: ");
    scanf("%s", binario);

    len = strlen(binario);

    // Percorre a string binaria da direita para a esquerda
    for (i = len - 1; i >= 0; i--) {
        // Verifica se o digito atual é '1'
        if (binario[i] == '1') {
            // A posição do dígito determina a potência de 2.
            // Por exemplo, o último dígito tem a posição (len - 1 - (len - 1)) = 0,
            // que corresponde a 2^0.
            decimal += pow(2, (len - 1 - i));
        }
    }

    printf("O numero em decimal e: %lld\n", decimal);

    return 0;
}