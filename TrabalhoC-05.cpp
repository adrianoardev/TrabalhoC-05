#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
// Criação de Struct para cadastro
struct cadastro {
	char nome[50];
	char cpf[15];
	char telefone[15];
	char email[50];
};
struct cadastro registro[7];
int main() {
	setlocale(LC_ALL, "Portuguese"); // Deixa o programa em Português BR
	printf("Matricula do Aluno: 3415162\n");
	printf("=--=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=\n");
	FILE* arq; // ponteiro para arquivo
	fopen_s(&arq, "3415162.csv", "w"); // Abrir arquivo
	int fclose(FILE * arq);
	int i;
	// Função para ler seis registros de usuarios
	for (i = 1; i < 7; i++)
	{
		printf("\nDigite os dados para o %dº cadastro:\n\n", i);
		// Abaixo é solicitado os dados para cadastro e são armazenados
		printf("Nome: ");
		gets_s(registro[i].nome, 50); // Leitura de string Nome
		fflush(stdin); // limpar buffer
		//fprintf(arq, "%s;\n\n", registro[i].nome);
		printf("CPF: ");
		gets_s(registro[i].cpf, 15); // Leitura de string CPF
		fflush(stdin); // limpar buffer
		//fprintf(arq, "%s;\n\n", registro[i].cpf);
		printf("Telefone: ");
		gets_s(registro[i].telefone, 15); // Leitura de string Telefone
		fflush(stdin); // limpar buffer
		//fprintf(arq, "%s;\n\n", registro[i].telefone);
		printf("E-mail: ");
		gets_s(registro[i].email, 50); // Leitura de string E-mail
		fflush(stdin); // limpar buffer
		//fprintf(arq, "%s;\n\n", &registro[i].email);
		// Imprime os dados cadastrados
		fprintf(arq, "Nome: %s; CPF: %s; Telefone: %s; E-mail: %s; \n",
			&registro[i].nome, &registro[i].cpf, &registro[i].telefone, &registro[i].email);
		printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	}
	fclose(arq);
	system("pause");
	return 0;
}