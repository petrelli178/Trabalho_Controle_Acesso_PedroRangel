#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h> // Para a função system()
int main() {
	setlocale(LC_ALL, "Portuguese"); // Configura a localização para Português

	
    char username[20];
    char password[20];
    int accessLevel = 0; // 0: nível padrão, 1: nível de usuário, 2: nível de administrador

    // Solicita o nome de usuário e senha
    printf("Digite o nome de usuário: ");
    scanf("%s", username);
    printf("Digite a senha: ");
    scanf("%s", password);

    // Verifica as credenciais
    if (strcmp(username, "admin") == 0 && strcmp(password, "admin123") == 0) {
        accessLevel = 2; // Nível de administrador
    } else if (strcmp(username, "usuario1") == 0 && strcmp(password, "senha123") == 0) {
        accessLevel = 1; // Nível de funcionário regular
    } else if (strcmp(username, "visitante") == 0 && strcmp(password, "visitante123") == 0) {
        accessLevel = 0; // Nível de convidado
    } else {
        accessLevel = -1; // Credenciais inválidas
    }

    // Exibe a mensagem apropriada com base no nível de acesso
    switch (accessLevel) {
        case 2:
            printf("Bem-vindo, administrador %s! Acesso concedido total.\n", username);
            break;
        case 1:
            printf("Bem-vindo, funcionário regular %s! Acesso concedido limitado.\n", username);
            break;
        case 0:
            printf("Bem-vindo, visitante %s! Acesso extremamente limitado.\n", username);
            break;
        default:
            printf("Credenciais inválidas. Acesso negado.\n");
    }
    
    system("pause");
    return 0;
}

