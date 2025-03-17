#include <stdio.h>
#include <stdlib.h>

double soma(double num1, double num2) {
    return num1 + num2;
}

double subtracao(double num1, double num2) {
    return num1 - num2;
}

double multiplicacao(double num1, double num2) {
    return num1 * num2;
}

double divisao(double num1, double num2) {
    return num1 / num2;
}

int verificaDivisao(double num2) {
    if (num2 == 0) {
        printf("Erro: Divisão por zero!\n");
        return 1;
    }
    return 0; 
}

int main() {  
    char operacao;
    double a, b;
    int continuar = 1;

    while (continuar) {
        printf("\nDigite o primeiro número: ");
        scanf("%lf", &a);

        printf("Digite o segundo número: ");
        scanf("%lf", &b);

        printf("Digite o operador (+, -, /, *): ");
        scanf(" %c", &operacao);

        switch (operacao) {
            case '+':
                printf("Resultado: %.2f\n", soma(a, b));
                break;
            case '-':
                printf("Resultado: %.2f\n", subtracao(a, b));
                break;
            case '/':
                if (!verificaDivisao(b)) printf("Resultado: %.2f\n", divisao(a, b));
                break;
            case '*':
                printf("Resultado: %.2f\n", multiplicacao(a, b));
                break;
            default:
                printf("Operador inválido!\n");
        }

        printf("Deseja continuar? (1 = Sim, 0 = Não): ");
        scanf("%d", &continuar);
    }

    return 0;
}
