#include <stdio.h>

// Função para adicionar dois números
float adicionar(float a, float b) {
    return a + b;
}

// Função para subtrair dois números
float subtrair(float a, float b) {
    return a - b;
}

// Função para multiplicar dois números
float multiplicar(float a, float b) {
    return a * b;
}

// Função para dividir dois números
float dividir(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Erro: Divisão por zero não é permitida.\n");
        return 0;
    }
}

int main() {
    int escolha;
    float num1, num2, resultado;

    while (1) {
        // Exibe o menu
        printf("Calculadora Simples\n");
        printf("1. Adição\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("5. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &escolha);

        if (escolha == 5) {
            break;
        }

        if (escolha < 1 || escolha > 5) {
            printf("Opção inválida. Tente novamente.\n");
            continue;
        }

        // Solicita os números ao usuário
        printf("Digite o primeiro número: ");
        scanf("%f", &num1);
        printf("Digite o segundo número: ");
        scanf("%f", &num2);

        // Realiza a operação escolhida
        switch (escolha) {
            case 1:
                resultado = adicionar(num1, num2);
                printf("Resultado da adição: %.2f\n", resultado);
                break;
            case 2:
                resultado = subtrair(num1, num2);
                printf("Resultado da subtração: %.2f\n", resultado);
                break;
            case 3:
                resultado = multiplicar(num1, num2);
                printf("Resultado da multiplicação: %.2f\n", resultado);
                break;
            case 4:
                resultado = dividir(num1, num2);
                if (num2 != 0) { // Evita a impressão de resultado para divisão por zero
                    printf("Resultado da divisão: %.2f\n", resultado);
                }
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }
        printf("\n");
    }

    printf("Calculadora encerrada.\n");
    return 0;
}
