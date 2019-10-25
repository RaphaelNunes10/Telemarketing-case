#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"portuguese");
	
	int opcao;
	char questao[100];
	
	printf("Digite 1 para Contas\nDigite 2 para Problemas Técnicos\nDigite 3 para Reclamações\nDigite 4 para Falar com um dos nossos atendentes\nou Digite 0 para Sair\n\nDigite: ");
	scanf("%d", &opcao);
	
	switch(opcao){
		case 0:
			return 0;
			break;
		case 1:
			printf("\nDigite o que gostaria de dizer: ");
			scanf("%s", &questao);
			
			printf("\nSua questão '%s'' foi enviada para o setor de Contas. Em breve entraremos em contato para que possamos te ajudar.\n\n", questao);
			getch();
			break;
		case 2:
			printf("\nDigite o que gostaria de dizer: ");
			scanf("%c", &questao[100]);
			
			printf("\nSua questão '%s' foi enviada para o setor de Problemas Ténicos. Em breve entraremos em contato para que possamos te ajudar.\n\n", questao);
			getch();
			break;
		case 3:
			printf("\nDigite o que gostaria de dizer: ");
			scanf("%c", &questao[100]);
			
			printf("\nSua questão '%s' foi enviada para o setor de Reclamações. Em breve entraremos em contato para que possamos te ajudar.\n\n", questao);
			getch();
			break;
		case 4:
			printf("\nDigite o que gostaria de dizer: ");
			scanf("%c", &questao[100]);
			
			printf("\nSua questão '%s' foi enviada para um de nossos atendentes. Aguarde na linha.\n\n", questao);
			getch();
			break;
	}
	
	return 0;
}
