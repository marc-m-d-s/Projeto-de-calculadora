1#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

// Funções matemáticas
double somar(double a, double b) {
    return a + b;
}

double subtrair(double a, double b) {
    return a - b;
}

double multiplicar(double a, double b) {
    return a * b;
}

double dividir(double a, double b) {
    if (b == 0) {
        printf("Erro: divisão por zero!\n");
        return 0;
    }
    return a / b;
}

int modulo(int a, int b) {
    if (b == 0) {
        printf("Erro: divisão por zero!\n");
        return 0;
    }
    return a % b;
}

double potencia(double base, double expoente) {
    return pow(base, expoente);
}

double raiz_quadrada(double x) {
    if (x < 0) {
        printf("Erro: raiz de número negativo!\n");
        return 0;
    }
    return sqrt(x);
}

// Programa principal
int main() {
    setlocale(LC_ALL, "");

    int opcao;
    double num1, num2;

    do {
        printf("=== Calculadora ===\n");
        printf("1. Soma\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("5. Módulo\n");
        printf("6. Potência\n");
        printf("7. Raiz Quadrada\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 6) {
            printf("Digite o primeiro número: ");
            scanf("%lf", &num1);
            printf("Digite o segundo número: ");
            scanf("%lf", &num2);
        } else if (opcao == 7) {
            printf("Digite o número: ");
            scanf("%lf", &num1);
        }

        switch (opcao) {
            case 1:
                printf("\n---Resultado: %.2lf---\n\n", somar(num1, num2));
                break;
            case 2:
                printf("\n---Resultado: %.2lf---\n\n", subtrair(num1, num2));
                break;
            case 3:
                printf("\n---Resultado: %.2lf---\n\n", multiplicar(num1, num2));
                break;
            case 4:
                printf("\n---Resultado: %.2lf---\n\n", dividir(num1, num2));
                break;
            case 5:
                printf("\n---Resultado: %d---\n\n", modulo((int)num1, (int)num2));
                break;
            case 6:
                printf("\n---Resultado: %.2lf---\n\n", potencia(num1, num2));
                break;
            case 7:
                printf("\n---Resultado: %.2lf---\n\n", raiz_quadrada(num1));
                break;
            case 0:
                printf("\n=== Encerrando a calculadora ===\n\n");
                break;
            default:
                printf("\n** Opção inválida! **\n\n");
        }

    } while (opcao != 0);

    return 0;
}