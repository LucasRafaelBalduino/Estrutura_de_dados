// Pilha_Stack.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
constexpr auto TAMPILHA = 10;

int Pilha[TAMPILHA] = { 0, 0, 0, 0, 0, 0, 0, 0, 0,0 };
int topo = 0;

void Lista_Elemento() { // listar Pilha
	for (int i = 0; i < TAMPILHA; i++) {
		printf_s("-");
		printf_s("|%d|", Pilha[i]);
		printf_s("-");
	}
	printf_s("\nTopo: %d\n", topo);
	printf_s("\n\n");
}

void push() { //inserir dados
	int valor;
	printf_s("Informe o valor: \n");
	scanf_s("%d", &valor);
	if (topo < TAMPILHA) {
		Pilha[topo] = valor;
		topo = topo + 1;
		Lista_Elemento();
	}
	else {
		printf_s("Pilha esta cheia...\n");
	}
}

void pop() {// removendo item
	if (topo >= 0) {
		Pilha[topo - 1] = 0;
		topo = topo - 1;
		Lista_Elemento();
	}else{
		printf_s("Pilha vazia... \n");
	}
}

void Limpar() { // limpar toda a pilha
	for (int i = 0; i < TAMPILHA; i++) {
		Pilha[i] = 0;
	}
	topo = 0;
}

int main()
{
	int opcao = 0;
	do{
		printf_s("Selecione as opcoes: \n\n");
		printf_s("[1] - para inserir\n");
		printf_s("[2] - Excluir\n");
		printf_s("[3] - Listar\n");
		printf_s("[4] - Limpar\n");
		printf_s("[-1] - Sair\n");
		printf_s("Opcao: ");
		scanf_s("%d", &opcao);

		switch (opcao){
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			Lista_Elemento();
			break;
		case 4:
			Limpar();
			break;
		case -1:
				break;
		default:
			printf_s("Opcao invalida...\n");
		}

	} while (opcao != -1);
}


