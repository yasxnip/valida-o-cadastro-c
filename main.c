#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    int idade;
    char senha[20];
    char confirmarSenha[20];

    printf("=== CADASTRO DE USUARIO ===\n");

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite uma senha (min 6 caracteres): ");
    scanf("%s", senha);

    printf("Confirme a senha: ");
    scanf("%s", confirmarSenha);

    int erro = 0;

    if (idade <= 0) {
        printf("Erro: idade invalida\n");
        erro = 1;
    }

    if (strlen(senha) < 6) {
        printf("Erro: senha muito curta\n");
        erro = 1;
    }

    if (strcmp(senha, confirmarSenha) != 0) {
        printf("Erro: senhas nao coincidem\n");
        erro = 1;
    }

    if (erro == 0) {
        printf("Cadastro realizado com sucesso!\n");
    } else {
        printf("Corrija os erros acima.\n");
    }

    return 0;
}
