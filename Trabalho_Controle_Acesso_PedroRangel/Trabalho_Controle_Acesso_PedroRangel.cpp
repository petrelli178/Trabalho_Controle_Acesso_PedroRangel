#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h> // Para a fun��o system()
int main() {
	setlocale(LC_ALL, "Portuguese"); // Configura a localiza��o para Portugu�s

	
    char username[20];
    char password[20];
    int accessLevel = 0; // 0: n�vel padr�o, 1: n�vel de usu�rio, 2: n�vel de administrador

    // Solicita o nome de usu�rio e senha
    printf("Digite o nome de usu�rio: ");
    scanf("%s", username);
    printf("Digite a senha: ");
    scanf("%s", password);

    // Verifica as credenciais
    if (strcmp(username, "admin") == 0 && strcmp(password, "admin123") == 0) {
        accessLevel = 2; // N�vel de administrador
    } else if (strcmp(username, "usuario1") == 0 && strcmp(password, "senha123") == 0) {
        accessLevel = 1; // N�vel de funcion�rio regular
    } else if (strcmp(username, "visitante") == 0 && strcmp(password, "visitante123") == 0) {
        accessLevel = 0; // N�vel de convidado
    } else {
        accessLevel = -1; // Credenciais inv�lidas
    }

    // Exibe a mensagem apropriada com base no n�vel de acesso
    switch (accessLevel) {
        case 2:
            printf("Bem-vindo, administrador %s! Acesso concedido total.\n", username);
            break;
        case 1:
            printf("Bem-vindo, funcion�rio regular %s! Acesso concedido limitado.\n", username);
            break;
        case 0:
            printf("Bem-vindo, visitante %s! Acesso extremamente limitado.\n", username);
            break;
        default:
            printf("Credenciais inv�lidas. Acesso negado.\n");
    }
    
    system("pause");
    return 0;
}

