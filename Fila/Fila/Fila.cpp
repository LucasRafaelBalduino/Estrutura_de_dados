// Fila.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
constexpr auto TAMFILA = 10;

//File 
int fila[TAMFILA] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
int head = 0; // cabeca da fila , indica quem è oprimeiro elemento
int tail = 0; // remove o elemnto da fila

void Lista_Elemento(){
	for (int i = 0; i < TAMFILA; i++) {
		printf_s("-");
		printf_s(" |%d|", fila[i]);
		printf_s("-");
	}
	printf_s("\nHead: %d\n", head);
	printf_s("\Tail: %d\n", tail);
	printf_s("\n\n");
}

void enqueue() { // adiciona na fila
	int val;
	if (tail < TAMFILA) {
		printf_s("Informe o item para adicionar na fila: ");
			scanf_s("%d", &val);
			fila[tail] = val;
			tail = tail + 1;
			Lista_Elemento();
	}
	else{
	
		printf_s("A fila esta cheia... \n");
	}
}

void dequeue() { // remove da fila
	if (head < tail) {
		fila[head] = 0;
		head = head + 1;
		Lista_Elemento();
	}
	else {
		printf_s("A fila esta vazia...\n");
	}
}

void Limpar() { // limpa fila
	for (int i = 0; i < TAMFILA; i++) {
		fila[0];
	}
	head = 0;
	tail = 0;

}


int main()
{
	int opcao = 0;
	
	do {

		printf_s("Seleciona a opcao \n\n");
		printf_s("[1] para inserir: \n");
		printf_s("[2] Remover: \n");
		printf_s("[3] Listar: \n");
		printf_s("[4] Limpar: \n");
		printf_s("[-1] Sair: \n");
		printf_s("Opcao: \n");
		scanf_s("%d", &opcao);

		switch (opcao) {
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
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
			printf_s("Opcao invalida.");
		}


	} while (opcao != -1);
	

	
	return 0;
}


