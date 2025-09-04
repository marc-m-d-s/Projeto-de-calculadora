#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Mapeamento de caracteres para Código Morse
char caracteres[] = "abcdefghijklmnopqrstuvwxyz1234567890 .?/";
const char* morse[] = {
    ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---",
    "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-",
    "..-", "...-", ".--", "-..-", "-.--", "--..", ".----", "..---", "...--",
    "....-", ".....", "-....", "--...", "---..", "----.", "-----",
    " ", "-.-.-.", "..--.."
};

// --- Função para encontrar e imprimir o código Morse de um caractere ---
void converterParaMorse(char c) {
    int i;
    for (i = 0; i < strlen(caracteres); i++) {
        if (caracteres[i] == c) {
            printf("%s ", morse[i]);
            return;
        }
    }
}

// --- Função principal do programa ---
int main() {
    char frase[256];
    int i;

    printf("Digite a frase ou numero para converter (max 255 caracteres):\n");
    fgets(frase, sizeof(frase), stdin);

    printf("\nCodigo Morse:\n");

    for (i = 0; i < strlen(frase); i++) {
        // Converte o caractere para minúsculo
        char caractere_atual = tolower(frase[i]);

        // Trata acentos e caracteres especiais do portugues
        switch (caractere_atual) {
            case 'á': case 'à': case 'â': case 'ã':
                caractere_atual = 'a';
                break;
            case 'é': case 'ê':
                caractere_atual = 'e';
                break;
            case 'í':
                caractere_atual = 'i';
                break;
            case 'ó': case 'ô': case 'õ':
                caractere_atual = 'o';
                break;
            case 'ú':
                caractere_atual = 'u';
                break;
            case 'ç':
                caractere_atual = 'c';
                break;
        }

        // Se for um espaço, adiciona 3 espaços para separar as palavras
        if (caractere_atual == ' ') {
            printf("   ");
        } else if (caractere_atual != '\n') { // Ignora a quebra de linha do fgets
            converterParaMorse(caractere_atual);
        }
    }

    printf("\n");
    return 0;
}